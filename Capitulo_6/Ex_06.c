#include <stdio.h>

int main () {

    int i, vet [10], aux = 0;

    for (i = 0; i < 10; i++)
        scanf ("%d", &vet [i]);

    for (i = 0; i < 10; i++){
        if (vet [i] % 2 == 0)
            aux = aux + 1;
    }
    printf ("Quantidade de numeros pares: %d", aux);
    
    return 0;
}