#include <stdio.h>

int main () {

float g;
const float pi = 3.141592;

printf ("Angulo em graus: ");
scanf ("%f", &g);

printf ("Angulo em radianos: %.2f", g * pi / 180);

return 0;
}
