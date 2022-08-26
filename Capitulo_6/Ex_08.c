#include <stdio.h>

int main () {

    int num [10], i, soma = 0, aux = 0;

    for (i = 0; i < 10; i++)
        scanf ("%d", &num [i]);

    for (i = 0; i < 10; i++) {
        if (num [i] < 0)
            aux = aux + 1;
        else 
            soma += num [i];
    }
    printf ("Quantidade de negativos: %d\tSoma dos positivos: %d", aux, soma);
    
    return 0;
}