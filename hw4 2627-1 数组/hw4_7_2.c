#include <stdio.h>

int main(){
    char c, str[80];
    int i;
    scanf("%c", &c);
    getchar();
    for(i = 0; i < 80; i++){
        str[i] = getchar();
        if(str[i] == c){
            printf("%d", i+1);
            return 0;
        }
    }
    printf("Not Found\n");
}