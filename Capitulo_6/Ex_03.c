#include <stdio.h>

int main () {

    int i, num [5], soma = 0;
    float media;
    
    for (i = 0; i < 5; i++) {
        scanf ("%d", &num [i]);
        soma += num [i];
    }
    for (i = 0; i < 5; i++)
        printf ("%d ", num [i]);

    media = soma / 5;
    printf ("\n%.2f", media);

    return 0;
}