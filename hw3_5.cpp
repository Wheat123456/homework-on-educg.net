#include<iostream>
// 水仙花数：153、370、371、407
int main(){
    int m, n;
    std::cin >> m >> n;
    if(n < 153){
        std::cout << "Narc No:" << std::endl;
    }else if(m <= 153){
        if(n >= 153 && n < 370){
            std::cout << "Narc No:153" << std::endl;
        }else if(n == 370){
            std::cout << "Narc No:153 370" << std::endl;
        }else if(n >= 371 && n < 407){
            std::cout << "Narc No:153 370 371" << std::endl;
        }else if(n >= 407){
            std::cout << "Narc No:153 370 371 407" << std::endl;
        }
    }else if(m > 153 && m <=370){
        if(n == 370){
            std::cout << "Narc No:370" << std::endl;
        }else if(n >= 371 && n < 407){
            std::cout << "Narc No:370 371" << std::endl;
        }else if(n >= 407){
            std::cout << "Narc No:370 371 407" << std::endl;
        }
    }else if(m == 371){
        if(n >= 371 && n < 407){
            std::cout << "Narc No:371" << std::endl;
        }else if(n >= 407){
            std::cout << "Narc No:371 407" << std::endl;
        }
    }else if(m > 371 && m <=470){
        if(n >= 470){
            std::cout << "Narc No:407" << std::endl;
        }
    }else{
        std::cout << "Narc No:" << std::endl;
    }
}