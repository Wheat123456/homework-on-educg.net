#include <iostream>
#include <cstdio>
#include <cmath>

int main(){
    double a, b, c ,_c, _s, p;
    std::cout << "Enter 3 sides of the triangle:";
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    if(a + b > c && fabs(a - b) < c){
        _c = a + b + c;
        p = _c/2;
        _s = sqrt(p*(p - a)*(p - b)*(p - c));
        printf("area=%.2lf;perimeter=%.2lf\n", _s, _c);
    }else{
        std::cout << "These sides do not correspond to a valid triangle" << std::endl;
    }
}
