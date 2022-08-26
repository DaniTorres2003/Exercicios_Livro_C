#include <stdio.h>

int main () {

    int vet [100], i;

    for (i = 0; i < 100; i++) {
        if (i % 7 != 0) {
            vet [i] = i;
            printf ("%d ", vet [i]);
        }
    }
    

    return 0;
}