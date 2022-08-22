#include <stdio.h>

int main () {

int x, s = 0;

for (x = 0; x <= 50; x = x + 2)
    s = s + x;

printf ("%d\n", s);

return 0;
}
