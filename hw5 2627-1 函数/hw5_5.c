#include <stdio.h>
#include <math.h>

int prime(int m){       // 判断 m 是否为素数
    if(m < 2) return 0;
    else if(m == 2) return 1;
    else if(m%2 == 0) return 0;
    else{
        int i, t = sqrt(m);
        for(i = 3; i <= t; i++){
            if(m%i == 0) return 0;
        }
        return 1;
    }
}

int main(){
    int c = 6, a, b;    // c = a + b, c ∈ [6, 100]
    while(c <= 100){
        a = 3;
        while(1){
            b = c - a;
            if(prime(a) && prime(b)) break;
            a+=2;
        }
        printf("%4d=%2d+%2d", c, a, b);
        if(!((c+1)%5)) printf("\n");
        c+=2;
    }
    return 0;
}

