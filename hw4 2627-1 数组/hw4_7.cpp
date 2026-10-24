#include <iostream>

int main(){
    char c, str[80];
    std::cin >> c;
    std::cin >> str;
    for(int i = 0; i < 80; i++){
        if(str[i] == c){
            std::cout << i+1 << std::endl;
            return 0;
        }
    }
    std::cout << "Not Found\n";
}