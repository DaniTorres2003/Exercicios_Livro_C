#include <stdio.h>

int main () {

int i, aux;
float s = 0;

for (i = 1, aux = 1; i <= 55; i++, aux = aux + 2){
    s = s + (float) aux / (float) i;
}
printf ("%.2f", s);

return 0;
}
