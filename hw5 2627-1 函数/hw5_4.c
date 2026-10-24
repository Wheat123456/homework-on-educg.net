#include <stdio.h>

int fib(int n){     // 斐波那契数列第 n 项
    int a = 1, b = 1, i, t;
    for(i = 1; i < n; i++){
        t = a;
        a = b;
        b = a+t;
    } 
    return a;
}

int main(){
    int m, n, i = 1, t;
    printf("Input m: ");
    scanf("%d", &m);
    printf("Input n: ");
    scanf("%d", &n);
    while(1){
        t = fib(i);
        if(t > n){
            printf("\n");
            return 0;
        }
        if(t >= m && t <= n) printf("%d ", t);
        i++;
    }
}