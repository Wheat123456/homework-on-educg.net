#include <iostream>

int main(){
    int n, i;
    std::cin >> n;
    int arr[n];
    for(i = 0; i < n; i++){
        std::cin >> arr[i];
    }
    for(i = n - 1; i >= 0; i--){
        std::cout << arr[i];
        if(i != 0){
            std::cout << " ";
        }else{
            std::cout << std::endl;
        }
    }
}
