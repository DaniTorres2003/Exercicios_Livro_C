#include <stdio.h>

int main () {

float a, r;
const float pi = 3.141592;

printf ("Altura do cilindro: ");
scanf ("%f", &a);
printf ("Raio do cilindro: ");
scanf ("%f", &r);

printf ("\nVolume do cilindro: %.2f", pi *(r * r)* a);

return 0;
}
