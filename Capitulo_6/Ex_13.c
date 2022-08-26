#include <stdio.h>

int main () {

    int vet [10], i, j;

    for (i = 0; i < 10; i++) {
        scanf ("%d", &vet [i]);
        for (j = 0; j < i; j++) {
            if (vet [i] == vet [j]) {
                printf ("Digite um numero diferente de %d\n", vet [i]);
                i--;            
            }
        }
    }
    
    return 0;
}