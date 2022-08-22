#include <stdio.h>

int main () {

int x, i, s = 0;

for (i = 0; i < 10; i++) {
    scanf ("%d", &x);
    s = s + x;
}
printf ("\n%d\n", s);

return 0;
}
