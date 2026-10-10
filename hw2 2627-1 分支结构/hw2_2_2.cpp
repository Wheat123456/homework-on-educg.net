#include <iostream>
#include <stdio.h>

int main(){
    char c15[15];
    int letter=0;
    int blank=0;
    int digit=0;
    int other=0;
    for(int i=0;i<15;i++){
        std::cin.get(c15[i]);
    }
    for (int i=0;i<15;i++){
        if((c15[i]>='a' && c15[i]<='z') || (c15[i]>='A' && c15[i]<='Z')){
            letter++;
        }
        else if(c15[i]==' '){
            blank++;
        }
        else if(c15[i]>='0' && c15[i]<='9'){
            digit++;
        }
        else{
            other++;
        }
    }
    printf("letter=%d blank=%d digit=%d other=%d\n",letter,blank,digit,other);
}
