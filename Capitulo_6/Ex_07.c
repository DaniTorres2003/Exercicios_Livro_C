#include <stdio.h>

int main () {

    int x [10], i, maior, menor;

    for (i = 0; i < 10; i++)
        scanf ("%d", &x [i]);
    
    maior = x [0];
    menor = x [0];
    for (i = 0; i < 10; i++) {
        if (maior < x [i])
            maior = x [i];
        if (menor > x [i])
            menor = x [i];
    } 
    printf ("Maior: %d\tMenor: %d", maior, menor);

    return 0;
}