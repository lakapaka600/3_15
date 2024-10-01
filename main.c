#include <stdio.h>

int main(void) {
    char persona;
    float prezzo;
    printf("inserisci la persona, P ( pensioato ) , D (disoccupato), S(studente): ");
    scanf("%c",&persona);
    printf("inserisci prezzo: ");
    scanf("%f",&prezzo);
    if (persona == 'P') {
        prezzo = prezzo - (prezzo*0.10);
    }
    else if (persona == 'S') {
        prezzo = prezzo - (prezzo*0.15);
    }
    else if (persona == 'D') {
        prezzo = prezzo -(prezzo*0.25);
    }
    else {
        printf("persona non valida per lo sconto");
    }
    printf("inserisci il prezzofinale: %f " , prezzo);

    return 0;
}
