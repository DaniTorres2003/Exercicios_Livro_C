#include <stdio.h>

int main () {

char a;
int i = 0;

printf ("Letra maiuscula: ");
scanf ("%c", &a);

i = a;
a = i + 32;

printf ("\nLetra minuscula: %c", a);

return 0;
}
