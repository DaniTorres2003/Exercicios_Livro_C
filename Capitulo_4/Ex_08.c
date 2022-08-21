#include <stdio.h>

int main () {

int x;

scanf ("%d", &x);

if (x >= 5 && x <= 7)
    printf ("\nInfantil A\n");
if (x >= 8 && x <= 10)
    printf ("\nInfantil B\n");
if (x >= 11 && x <= 13)
    printf ("\nInfantil A\n");
if (x >= 14 && x <= 17)
    printf ("\nInfantil B\n");
if (x >= 18)
    printf ("\nSenior\n");

return 0;
}
