#include <stdio.h>

int sign(int x){
    if(x < 0) return -1;
    else if(x > 0) return 1;
    else return 0;
}

int main(){
    int x;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("sign(%d)=%d", x, sign(x));
    return 0;
}