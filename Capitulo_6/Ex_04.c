#include <stdio.h>

int main () {

    int A [6] = {1, 0, 5, -2, -5, 7}, soma = 0, i;
  
    soma = A [0] + A [1] + A [5];
    printf ("Soma = %d\n", soma);

    A [3] = 100;
    for (i = 0; i < 6; i++)
        printf ("%d\n", A [i]);
    
    return 0;
}