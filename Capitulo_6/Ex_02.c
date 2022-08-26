#include <stdio.h>

int main () {

    int i ,num [6];

    for (i = 0; i < 6; i++) 
        scanf ("%d", &num [i]);
    
    for (i = 5; i > -1; i--)
        printf ("%d ", num [i]);

    return 0;
}