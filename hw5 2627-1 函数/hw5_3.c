#include <stdio.h>

int factorsum(int num){
    int num_half = num/2 + 1;
    int i = 1, sum = 0;
    for( ; i <= num_half; i++){
        if(!(num%i)) sum+=i;
    }
    return sum;
}
int main(){
    int m, n, i;
    printf("Input m: ");
    scanf("%d", &m);
    printf("Input n: ");
    scanf("%d", &n);
    for(i = m; i <= n; i++){
        if(i == factorsum(i)) printf("%5d", i);
    }
    printf("\n");
    return 0;
}