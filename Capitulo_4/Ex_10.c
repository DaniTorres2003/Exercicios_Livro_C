#include <stdio.h>
#include <math.h>

int main () {

float x, y, z, m;
int a;
printf ("Digite tres valores e um numero de 1 a 4: ");
scanf ("%f %f %f %d", &x, &y, &z, &a);

switch (a) {
    case 1:
        m = pow(x * y * z, 1 / 3);
        printf ("\nMedia geometrica: %.2f", m);
        break;
    case 2:
        m = (x + 2 * y + 3 * z) / 6;
        printf ("\nMedia ponderada: %.2f", m);
        break;
    case 3:
        m = 1 / (1/x) + (1/y) + (1/z);
        printf ("\nMedia harmonica: %.2f", m);
        break;
    case 4:
        m = (x + y + z) / 3;
        printf ("\nMedia aritmetica: %.2f", m);
}

return 0;
}
