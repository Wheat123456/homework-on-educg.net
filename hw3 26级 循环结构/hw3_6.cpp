#include <iostream>
int main(){
    int n, i;
    std::cin >> n;
    char c = 'A';
    while(n != 0){
        for(i = 1; i <= n; i++){
            std::cout << c++;
            if(i != n){
                std::cout << " ";
            }
        }
        if(--n != 0){
            std::cout << std::endl;
        }
    }
}
