#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
#include <iostream>
#include "Integer.h"

int main(){
    srand((time(0)));
    
    char operationSymbol;

    for (int i = 0; i < 10; ++i) {
        // Inside this loop, generate random integers 
        // and perform calculations
        int operationNum = rand() % 4;

        switch(operationNum){
        case 0:
            operationSymbol = '+';
            break;
        case 1:
            operationSymbol = '-';
            break;
        case 2: 
            operationSymbol = '*';
            break;
        case 3:
            operationSymbol = '/';
            break;
        }

        int num1 = (rand() % 10 + 1);
        int num2 = (rand() % 10 + 1);

        Integer int1(num1);
        Integer int2(num2);

        switch(operationSymbol) {
            case '+':
                std::cout << int1.getValue() << " + " << int2.getValue() << " = " << (int1.getValue() + int2.getValue()) << std::endl;
                break;
            case '-':
                std::cout << int1.getValue() << " - " << int2.getValue() << " = " << (int1.getValue() - int2.getValue()) << std::endl;
                break;
            case '*':
                std::cout << int1.getValue() << " * " << int2.getValue() << " = " << (int1.getValue() * int2.getValue()) << std::endl;
                break;
            case '/':
                if (int2.getValue() != 0) {
                    std::cout << int1.getValue() << " / " << int2.getValue() << " = " << int1.getValue() / int2.getValue() << std::endl;
                } 
                else {
                    std::cout << "Division by zero is not allowed." << std::endl;
                }
                break;
        }   
    }

    return 0;
}