#include <stdio.h>
#include <stdbool.h>

bool is(int number){    // 判断 number 是否是水仙花数，1 <= number <= 1 000
    if(number == 153 || number == 370 || number ==371 || number == 407) return true;    // [1, 1 000] 之间的水仙花数只有 153, 370, 371, 407 这四个
    else return false;
}

int main(){
    int m, n, i;
    printf("Input m: ");
    scanf("%d", &m);
    printf("Input n: ");
    scanf("%d", &n);
    for(i = m; i <= n; i++){
        if(is(i)) printf("%d\n", i);
    }
    return 0;
}