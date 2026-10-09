#include <iostream>

int main() {
    std::cout << "[1]apple\n[2]pear\n[3]orange\n[4]grape\n[0]exit" << std::endl;
    int c, t = 0;
    std::cin >> c;
    while (c != 0) {
        switch (c) {
            case 1:
                std::cout << "price=3.0" << std::endl;
                break;
            case 2:
                std::cout << "price=2.5" << std::endl;
                break;
            case 3:
                std::cout << "price=4.1" << std::endl;
                break;
            case 4:
                std::cout << "price=10.2" << std::endl;
                break;
            case 0:
                std::cout << "" << std::endl;
                break;
            default:
                std::cout << "price=0" << std::endl;
        }
        t++;
        if (t == 5) {
            break;
        }
        std::cin >> c;
    }
    return 0;
}