#include <stdio.h>

int main(){
    int n, i, j, k, t = 1;
    scanf("%d", &n);
    int arr[n][n];
    for(i = 0; i < n-1; i++){
        arr[0][i] = t++;
    }
    for(i = 0; i < n-1; i++){
        arr[i][n-1] = t++;
    }
    for(i = 0; i < n-1; i++){
        arr[n-1][n-1-i] = t++;
    }
    for(i = 0; i < n-1; i++){
        arr[n-1-i][0] = t++;
    }
    for(j = 1; j < n-1; j++){
        for(k = 1; k < n-1; k++){
            arr[j][k] = 0;
        }
    }
    for(j = 0; j < n; j++){
        for(k = 0; k < n; k++){
            if(arr[j][k] < 10){
                printf(" %d ", arr[j][k]);
            }else{
                printf("%d ", arr[j][k]);
            }
        }
        printf("\n");
    }
    return 0;
}