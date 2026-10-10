#include<iostream>

int main(){
    char in;
    char out[64];
    int i, m = 0;
    while(1){
        std::cin >> in;
        if(in >= '0' && in <= '9'){
            out[m] = in;
            m++;
        }else if(in == '#') break;
    }
    for(i = 0; i < m; i++){
        std::cout << out[i];
    }
    std::cout << std::endl;
}