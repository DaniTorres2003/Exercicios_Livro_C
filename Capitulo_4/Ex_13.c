#include <stdio.h>
#include <stdlib.h>

int main () {

char a;
float x, y;

printf ("(1)Soma\n(2)Subtracao\n(3)Multiplicacao\n(4)Divisao\n");
a = getch ();
printf ("\nDigite dois valores: ");
scanf ("%f %f", &x, &y);

switch (a) {
    case '1':
        printf ("\n%.2f", x + y);
        break;
    case '2':
        printf ("\n%.2f", x - y);
        break;
    case '3':
        printf ("\n%.2f", x * y);
        break;
    case '4':
        printf ("\n%.2f", x / y);
        break;
}

return 0;
}
