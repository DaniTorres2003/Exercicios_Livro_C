#include <stdio.h>

int main () {

unsigned int num, aux, result;

printf ("Numero inteiro positivo de 3 algoritmos: ");
scanf ("%d", &num);

result = num % 10;
aux = num / 10;
result = result * 10 + aux % 10;
aux /= 10;
result = result * 10 + aux % 10;

printf ("\nNumero invertido : %d", result);

return 0;
}
