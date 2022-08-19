#include <stdio.h>

int main () {

float c;

printf ("Temperatura em Celsius: ");
scanf ("%f", &c);

printf ("\nTemperatura em Fahrenheit: %.2f", c *(9 / 5)+ 32);

return 0;
}
