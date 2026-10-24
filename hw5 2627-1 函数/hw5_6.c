#include <stdio.h>
#include <math.h>

int m$a(int a, int m){      // 生成 m 个 a 的数，如 m$a(4, 5) = 44444
    int i, s = 0;
    for(i = 0; i < m;i++){
        s+=a*pow(10, i);
    }
    return s;
}

int main(){
    int a, n, i, s = 0;
    printf("Input a, n: ");
    scanf("%d %d", &a, &n);
    for(i = 1; i <= n; i++){
        s+=m$a(a, i);
    }
    printf("s=%d\n", s);
    return 0;
}