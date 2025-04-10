#include <stdio.h>
#include "interfaccia.h"

int main() {
    StackPtr s;
    s.size = 5;
    s.cap = 5;
    int n;
    int *point;
    
    // Allocazione dinamica di un array di 5 interi
    s.numeri = (int *)malloc(s.cap * sizeof(int));
    if (s.numeri == NULL) {
        printf("Errore di allocazione memoria.\n");
        return 1;
    }
    
    // Inserimento dei valori
    printf("Inserisci 5 numeri interi:\n");
    for (int i = 0; i < s.size; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &s.numeri[i]);
    }
    
    //CHiedo ilvalore da sostituire
    printf("che valore vuoi inserire? : ");
    scanf("%d", &n);
    //push(s, n);
    pop(s, &point);

    //Stampa dei valori
    printf("Hai inserito:\n");
    for (int i = 0; i < s.size; i++) {
        printf("%d ", s.numeri[i]);
    }
    printf("\n");
}