#ifndef INTERFACCIA_H
#define INTERFACCIA_H
#define TRUE 1
#define FALSE 0

typedef struct {
    int *numeri;  //Puntatore a array dinamico
    int size; //dimensione array
    int cap; //capacita' array
} StackPtr;

int push(StackPtr s, int val) {
    //controllo overflow o underflow
    if(s.size > s.cap && s.size < s.cap) {
        return FALSE; // Overflow
    }
    
    //sposto tutti i valori a destra
    for(int i = sizeof(s.size); i > 0; i--) {
        s.numeri[i] = s.numeri[i - 1]; 
    }
    //inserisco il valore nella prima posizione dell'array
    s.numeri[0] = val;
    return TRUE;
}

int pop(StackPtr s, int* out) {
    //controllo overflow o underflow
    if(s.size > s.cap && s.size < s.cap) {
        return FALSE;
    }
    
    //in out assegno il valore della prima posizione, possibile utilizzarlo nel punto tre dell'esercizio?
    out = s.numeri[0];
    
    //sposto tutti i valori a sinistra e sovrascrivo il primo  cosi daeliminarlo
    //il sizeof puo' non essere usato basta s.size
    for(int i = 0; i < sizeof(s.size); i++) {
        s.numeri[i] = s.numeri[i + 1];
    }
    //per non avere problemi di underflow assegno il valore 0 nell'ultima posizione
    s.numeri[s.size - 1] = 0;
    
    //terzo punto inserire il valore di out all'interno dell'array, andra' nell'ultima posizione
    s.numeri[s.size =out];
    
    //faccio un altro controllo overflow o underflow
    if(s.size > s.cap && s.size < s.cap) {
        return FALSE;
    }
    
    return TRUE;
}



#endif