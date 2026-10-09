#include <stdio.h>
int main() {
    float t_f, t_c;
    scanf("%f", &t_f);
    t_c = 5 * (t_f - 32) / 9;
    printf("Celsius=%.2f\n", t_c);
    return 0;
}