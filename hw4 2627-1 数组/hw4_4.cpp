#include <iostream>

int main(){
    int n, m, i, j;
    std::cin >> n;
    int arrN[n];
    for(i = 0; i < n; i++){
        std::cin >> arrN[i];
    }
    std::cin >> m;
    int arrM[m];
    for(j = 0; j < m; j++){
        std::cin >> arrM[j];
    }
    int out1 = 1;
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            if (arrN[i] == arrM[j]) goto escN;
        }
        if(out1 == 1){
            out1 = 0;
        }else{
            std::cout << " ";
        }
        std::cout << arrN[i];
        escN:
        ;
    }
    for(j = 0; j < m; j++){
        for(i = 0; i < n; i++){
            if (arrM[j] == arrN[i]) goto escM;
        }
        if(out1 == 1){
            out1 = 0;
        }else{
            std::cout << " ";
        }
        std::cout << arrM[j];
        escM:
        ;
    }
    std::cout << std::endl;
}