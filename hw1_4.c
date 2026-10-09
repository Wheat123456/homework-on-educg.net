#include <stdio.h>
int main() {
    int n, i;
    float sum = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }
    printf("n=%d,sum=%.7f\n", n, sum);
    return 0;
}