#include <stdio.h>

int main(){
    int n, i, maxIndex = 0;
    printf("Input n: ");
    scanf("%d", &n);
    int arr[n];
    printf("Input %d integers: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(i = 1; i < n; i++){
        if(arr[i] > arr[maxIndex]) maxIndex = i;
    }
    printf("max=%d, index=%d", arr[maxIndex], maxIndex);
}


