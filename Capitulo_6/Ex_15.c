#include <stdio.h>

int main() {

    float vet [10], aux = 0;
    int i, j;

    for (i = 0; i < 10; i++)
        scanf ("%f", &vet [i]);

    for(i = 0; i < 10; i++)
        for(j = i + 1; j < 10; j++)
            if(vet [i] > vet [j]){
                aux = vet [j];
                vet [j] = vet [i];
                vet [i] = aux;
            }
    for(i = 0; i < 10; i++)
        printf("%f  ", vet [i]);
    printf("\n");
    return 0;
}