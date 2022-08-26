#include <stdio.h>

int main () {

    int vet [10], i, j;

    for (i = 0; i < 10; i++) 
        scanf ("%d", &vet [i]);

    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (vet [i] == vet [j])
                printf ("Iguais: %d\n", vet [i]);
        }

    }

    return 0;
}