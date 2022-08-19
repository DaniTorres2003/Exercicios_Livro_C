#include <stdio.h>

int main () {

float r, c;

printf ("Valor de Real: R$");
scanf ("%f", &r);
printf ("Cotacao do dolar: ");
scanf ("%f", &c);

printf ("Valor em dolar: US$%.2f", r * c);

return 0;
}
