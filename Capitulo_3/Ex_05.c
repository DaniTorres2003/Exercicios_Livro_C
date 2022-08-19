#include <stdio.h>

int main () {

int i, a;

printf ("Idade: ");
scanf ("%d", &i);
printf ("Ano atual: ");
scanf ("%d", &a);

printf ("\nAno de nascimento: %d", a - i);

return 0;
}
