#include <stdio.h>

int main () {

int x, i, menor, maior;

for (i = 0; i < 10; i++) {
    scanf ("%d", &x);
    if (i == 0) {
        menor = x;
        maior = x;
        continue;
    }
    if (menor > x)
        menor = x;
    if (maior < x)
        maior = x;
}
printf ("\nMenor: %d\tMaior: %d", menor, maior);

return 0;
}
