#include <iostream>
#include "Fraction.h"

int main() {
    
    Fraction frac1(1,2);
    Fraction frac2(1,2);

    Fraction frac3(frac1+frac2);
    frac1.print();
    std::cout<<"\n+"<<std::endl;
    frac2.print();
    std::cout<<"\n-----"<<std::endl;
    frac3.print();
    return 0;
}

//g++ -std=c++17 -o main main.cpp Fraction.cpp
// ./main