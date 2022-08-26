#include <stdio.h>
#include <math.h>

int main() {

    int i;
    float vet [10], media = 0, variancia = 0, d;
    
    for (i = 0; i < 10; i++){
        scanf ("%f", &vet [i]);
        media = (media + vet [i]) / 10;
    }

    for (i = 0; i < 10; i++)
        variancia = pow (vet [i] - media, 2);
    
    d = sqrt (variancia);
    printf ("Desvio padrao: %f\n", d);

    return 0;
}