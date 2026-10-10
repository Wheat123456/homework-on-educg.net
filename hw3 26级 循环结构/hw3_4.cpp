#include<iostream>
#include<math.h>

int main(){
    int n, a, s = 0, t, i;
    std::cin >> n;
    a = log10(n) + 1;
    for(i = 1; i <= a; i++){
        t = n/pow(10, a - i);
        s+=t;
        n-=t*pow(10, a - i);
    }
    std::cout << a << " " << s << std::endl;
}
