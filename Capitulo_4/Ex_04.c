#include <stdio.h>

int main () {

int s, p;

printf ("Valor do salario: R$");
scanf ("%d", &s);
printf ("Valor da prestacao: R$");
scanf ("%d", &p);

if (p > (s * 20)/ 100)
    printf ("\nEmprestimo nao concedido!\n");
else
    printf ("\nEmprestimo concedido!\n");

return 0;
}
