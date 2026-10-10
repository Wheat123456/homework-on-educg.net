#include <stdio.h>

int main(){
    int e_kWh;
    float pay;
    scanf("%d",&e_kWh);
    if(e_kWh <= 50 && e_kWh >= 0){
        pay = e_kWh * 0.53;
    }
    else if(e_kWh > 50){
        pay = 26.5 + (e_kWh - 50) * 0.58;
    }
    else{
        printf("数据无效\n");
        return -1;
    }
    printf("kWh=%d,pay=%.2f\n",e_kWh,pay);
    return 0;
}
