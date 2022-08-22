#include <stdio.h>

int main() {

float numHarm = 1;
int i, n;

scanf("%d", &n);

for(i = 1; i <= n; i++){
    numHarm += (float) 1 / (float) i;
}
printf("%.2f\n", numHarm);

return 0;
}
