#include <stdio.h>
#include <math.h>

int main(){
    char str[64], c = 0;
    int i = 0, num = 0, isNegative = 0, j;
    while(c != '#'){
        c = getchar();
        if((c>='0' && c<='9') || (c>='A' && c<='F') || (c>='a' && c<='f')){
            str[i] = c;
            i++;
        }
        if(c == '-' && i == 0) isNegative = 1;
    }
    str[i] = '\0';
    for(j = 0; j < i; j++){
        if(str[j] >= '0' && str[j] <= '9'){
            num += (str[j] - 48)*pow(16, i-j-1);
        }else if(str[j] == 'A' || str[j] == 'a'){
            num += 10*pow(16, i-j-1);
        }else if(str[j] == 'B' || str[j] == 'b'){
            num += 11*pow(16, i-j-1);
        }else if(str[j] == 'C' || str[j] == 'c'){
            num += 12*pow(16, i-j-1);
        }else if(str[j] == 'D' || str[j] == 'd'){
            num += 13*pow(16, i-j-1);
        }else if(str[j] == 'E' || str[j] == 'e'){
            num += 14*pow(16, i-j-1);
        }else if(str[j] == 'F' || str[j] == 'f'){
            num += 15*pow(16, i-j-1);
        }
    }
    if(isNegative == 1) printf("-");
    printf("%d\n", num);
    return 0;
}