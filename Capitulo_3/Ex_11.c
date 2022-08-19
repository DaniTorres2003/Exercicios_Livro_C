#include <stdio.h>

int main () {

float r;
#define pi 3.141592

printf ("Raio do circulo: ");
scanf ("%f", &r);

printf ("Area do circulo: %.2f", pi *(r * r));

return 0;
}
