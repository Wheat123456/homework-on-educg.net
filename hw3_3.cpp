#include<iostream>

int main(){
    int n, i, min;
    std::cin >> n;
    int arr[n];
    for(i = 0; i < n; i++){
        std::cin >> arr[i];
    }
    min = arr[0];
    for(i = 1; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    std::cout << "min=" << min << std::endl;
}