#include <stdio.h>

int main () {

int x, i, s = 0;
float m = 0;

for (i = 0; i < 10; ) {
    scanf ("%d", &x);
    if (x > 0) {
        s = s + x;
        i++;
    }
}
m = s / 10;

printf ("\n%.2f", m);

return 0;
}
