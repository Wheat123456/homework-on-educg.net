#include <iostream>

int main(){
    int arr[10], t, i, n = 9;
    std::cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] >> arr[5] >> arr[6] >> arr[7] >> arr[8] >> arr[9];
    while(n != 0){
        for(i = 0; i < 9; i++){
            if(arr[i] > arr[i+1]){
                t = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = t;
            }
        }
        n--;
    }
    std::cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << " " << arr[5] << " " << arr[6] << " " << arr[7] << " " << arr[8] << " " << arr[9] << std::endl;
}