#include <stdio.h>

int main () {

int x, i, q, maior = 0, qmaior = 0;

scanf ("%d", &q);
printf ("\n");

for (i = 0; i < q; i++) {
    scanf ("%d", &x);
    if (maior == x) {
        qmaior++;
    }
    if (maior < x) {
        maior = x;
        qmaior = 0;
        qmaior++;
    }
}
printf ("\nMaior: %d\tQuantidade de vezes lido: %d\n", maior, qmaior);

return 0;
}
