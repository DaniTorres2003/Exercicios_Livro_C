#include <stdio.h>

int main() {

int n, i, j, UltFat, FatAtual;
float e;

do{
    scanf("%d", &n);
    if(n < 1){
        printf("Digite um numero inteiro e positivo\n");
        continue;
    }
    for(i = 1, e = 0, UltFat = 1; i <= n; i++){
        for(j = i; j <= i; j++){
            FatAtual = UltFat * j;
            UltFat = FatAtual;
        }
        e += 1 / (float) FatAtual;
    }
}while(n < 1);

printf("\nO valor de E eh: %f\n", e);

return 0;
}
