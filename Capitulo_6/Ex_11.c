#include <stdio.h>

int main () {

    int x [10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, y [10], i;

    for (i = 0; i < 10; i++) 
        y [i] = (x [i] * x [i]);

    for (i = 0; i < 10; i++)
        printf ("X: %d\tY: %d\n", x [i], y [i]);

    return 0;
}