#include <iostream>

int main(){
    int arr2[4][4], i, j, k, y;
    std::cin >> arr2[0][0] >> arr2[0][1] >> arr2[0][2] >> arr2[0][3] >> arr2[1][0] >> arr2[1][1] >> arr2[1][2] >> arr2[1][3] >> arr2[2][0] >> arr2[2][1] >> arr2[2][2] >> arr2[2][3] >> arr2[3][0] >> arr2[3][1] >> arr2[3][2] >> arr2[3][3];
    for(i = 0; i < 4; i++){
        y = 0;
        for(j = 1; j < 4; j++){
            if(arr2[i][j] > arr2[i][y]) y = j;
        }
        for(k = 0; k < 4; k++){
            if(arr2[k][y] < arr2[i][y]) goto skip;
        }
        std::cout << "*" << i << "*" << y << "*" << arr2[i][y] << std::endl;
        return 0;
        skip:
        ;
    }
    std::cout << "*NO*" << std::endl;
}