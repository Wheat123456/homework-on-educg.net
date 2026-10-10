#include <stdio.h>

int main(){
    int a,b,c,t,x,y,z;
    scanf("%d %d %d",&a,&b,&c);
    if(a > b){
        t = a;
        a = b;
        b = t;
    }
    if(c > b){
        z = c;
        y = b;
        x = a;
    }else if(c > a){
        z = b;
        y = c;
        x = a;
    }else{
        z = b;
        y = a;
        x = c;
    }
    printf("%d %d %d",x,y,z);
    return 0;
}
