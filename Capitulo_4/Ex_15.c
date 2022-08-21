#include <stdio.h>
#include <math.h>

int main () {

float a, b, c, delta, x1, x2;

scanf ("%f %f %f", &a, &b, &c);

if (a == 0) {
    printf ("\nNao e equacao de segundo grau!\n");
    return 0;
}

delta = (b * b)- 4 * a * c;

if (delta < 0) {
    printf ("\nNao existe raiz!\n");
    return 0;
}
if (delta == 0) {
    printf ("\nRaiz unica!\n");
    return 0;
}
if (delta > 0) {
    x1 = (- b + sqrt(delta))/ 2 * a;
    x2 = (- b - sqrt(delta))/ 2 * a;
    printf("\nx1 = %.2f\n", x1);
    printf("x2 = %.2f\n", x2);
}

return 0;
}
