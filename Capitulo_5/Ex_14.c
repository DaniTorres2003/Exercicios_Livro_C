#include <stdio.h>

int main() {

int i, n, fib1 = 0, fib2 = 1, termoFibonacci;
scanf("%d", &n);

if(n == 0){
    printf("%d\n", fib1);
    return 0;
}
if(n == 1){
    printf("%d\n", fib2);
    return 0;
}

for(i = 0; i <= n; i++){
    termoFibonacci = fib1 + fib2;
    fib1 = fib2;
    fib2 = termoFibonacci;
}
printf("%d\n", termoFibonacci);

return 0;
}
