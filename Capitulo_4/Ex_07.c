#include <stdio.h>

int main () {

float x;
char y;

scanf ("%f ", &x);
scanf ("%c", &y);

switch (y) {
    case 'g': // MG
        printf ("\nPreco final: R$%.2f", x + ((x * 7)/ 100));
        break;
    case 's': // SP
        printf ("\nPreco final: R$%.2f", x + ((x * 12)/ 100));
        break;
    case 'r': // RJ
        printf ("\nPreco final: R$%.2f", x + ((x * 15)/ 100));
        break;
    case 'm': // MS
        printf ("\nPreço final: R$%.2f", x + ((x * 8)/ 100));
        break;
    default:
        printf ("Erro!");
        break;
}

return 0;
}
