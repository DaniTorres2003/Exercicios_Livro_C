#include <stdio.h>
#include <stdlib.h>

int main () {

    int vet [8], x, y, soma = 0, i;
    for (i = 0; i < 8; i++)
        scanf ("%d", &vet [i]);

    system ("cls");
    scanf ("%d %d", &x, &y);
    soma = vet [x] + vet [y];
    printf ("Soma = %d", soma);
    
    return 0;
}