#include <stdio.h>

int main () {

    int A [10], B [10], C [10], i;

    for (i = 0; i < 10; i++)
        scanf ("%d", &A [i]);

    for (i = 0; i < 10; i++)
        scanf ("%d", &B [i]);

    for (i = 0; i < 10; i++) {
        C [i] = A [i] - B [i];
        printf ("%d ", C [i]);
    }
    
    return 0;
}