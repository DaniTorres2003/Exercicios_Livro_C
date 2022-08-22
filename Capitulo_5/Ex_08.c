#include <stdio.h>

int main () {

int x, i, s = 0;
float m = 0;

for (i = 0; i < 10; i++) {
    scanf ("%d", &x);
    s = s + x;
}
m = s / 10;

printf ("\n%.2f\n", m);

return 0;
}
