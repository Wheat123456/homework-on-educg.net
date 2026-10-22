#include <iostream>

int main(){
    int arr[6];
    int num, index = 0, i;
    for(i = 0; i < 6; i++){
        std::cin >> arr[i];
    }
    std::cin >> num;
    for(i = 0; i < 6; i++){
        if(num < arr[i]) break;
        index++;
    }
    for(i = 5; i > index; i--){
        arr[i] = arr[i-1];
    }
    if(index < 6){
        arr[index] = num;
    }
    for(i = 0; i < 6; i++){
        std::cout << arr[i];
        if(i != 5){
            std::cout << " ";
        }else{
            std::cout << std::endl;
        }
    }
}
