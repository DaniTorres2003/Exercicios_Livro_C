#include <stdio.h>

int main () {

int x, a = 0;

scanf ("%d", &x);

if (x % 3 == 0)
    a++;
if (x % 5 == 0)
    a++;

if (a == 0)
    printf ("O numero nao e divisivel por nenhum dos dois");
if (a == 1)
    printf ("O numero e divisivel por um deles");
if (a == 2)
    printf ("O numero e divisivel pelos dois");

return 0;
}
