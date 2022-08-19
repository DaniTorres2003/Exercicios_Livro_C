#include <stdio.h>

int main () {

unsigned int x;
unsigned char y;

scanf ("%d", &x);

y = ~x;

printf ("Complemento bit a bit: %d", y);

return 0;
}
