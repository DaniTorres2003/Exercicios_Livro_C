#include <stdio.h>

int main () {

char c;
int n;
float x;

scanf ("%c %d %f", &c, &n, &x);

printf ("%c %d %f\n", c, n, x);
printf ("%c\t%d\t%f\n", c, n, x);
printf ("%c\n%d\n%f", c, n, x);

return 0;
}
