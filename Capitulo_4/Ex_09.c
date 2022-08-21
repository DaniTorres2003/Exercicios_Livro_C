#include <stdio.h>

int main () {

float h, p;

scanf ("%f %f", &h, &p);

if (h > 0 && h < 1.20) {
    if (p > 0 && p <= 60)
        printf ("\n\"A\"\n");
    if (p > 60 && p <= 90)
        printf ("\n\"D\"\n");
    if (p > 90)
        printf ("\n\"G\"\n");
} else if (h >= 1.20 && h <= 1.70) {
    if (p > 0 && p <= 60)
        printf ("\n\"B\"\n");
    if (p > 60 && p <= 90)
        printf ("\n\"E\"\n");
    if (p > 90)
        printf ("\n\"H\"\n");
} else if (h > 1.70) {
    if (p > 0 && p <= 60)
        printf ("\n\"C\"\n");
    if (p > 60 && p <= 90)
        printf ("\n\"F\"\n");
    if (p > 90)
        printf ("\n\"I\"\n");
}

return 0;
}
