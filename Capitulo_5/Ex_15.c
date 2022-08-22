#include <stdio.h>

int main() {

int n, maior = 0, menor = 0;

while(n > -1){
    scanf("%d", &n);
    if(n > maior)
        maior = n;
    if(n < menor && n > -1)
        menor = n;
}
printf("\nMenor: %d\tMaior: %d", menor, maior);


return 0;
}
