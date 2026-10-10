#include <iostream>

int main(){
    int m, n, t, gcd, lcm;
    std::cout << "Input m,n:\n";
    std::cin >> m;
    std::cin >> n;
    lcm = m*n;
    while(m%n != 0){
        t = m%n;
        m = n;
        n = t;
    }
    gcd = n;
    lcm/=gcd;
    std::cout << gcd << " " << lcm << std::endl;
}
