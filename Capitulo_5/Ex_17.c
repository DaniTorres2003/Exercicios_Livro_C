#include <stdio.h>

int main() {
int x, i, j, aux;
scanf("%d", &x);

printf ("\n");

for (i = 0, aux = 1; i < x; i++){
    for (j = 0; j <= i; j++, aux++){
        printf ("%d ", aux);
    }
    printf ("\n");
}

return 0;
}
