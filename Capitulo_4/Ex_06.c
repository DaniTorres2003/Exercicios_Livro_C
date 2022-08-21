#include <stdio.h>

int main () {

float h;
char s;

scanf ("%f ", &h);
scanf ("%c", &s);

switch (s) {
    case 'm':
        printf ("\nPeso ideal: %.2f\n", (72.7 * h) - 58);
        break;
    case 'f':
        printf ("\nPeso ideal: %.2f\n", (62.1 * h) - 44.7);
        break;
}

return 0;
}
