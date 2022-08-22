#include <stdio.h>

int main () {

int x, i, div = 0;

VOLTA:;
system ("cls");

scanf ("%d", &x);

if (x < 2) {
    printf ("Valor deve ser maior que um!\n");
    system ("pause");
    goto VOLTA;
}
for (i = 1; i <= x; i++) {
    if (x % i == 0)
        div++;
}
if (div < 3)
    printf ("\nO numero e primo!");
if (div > 2)
    printf ("\nO numero nao e primo!");

return 0;
}
