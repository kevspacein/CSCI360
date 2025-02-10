//Integer.cpp
#include "Integer.h"

Integer::Integer(){
    value = 0;
}

Integer::Integer(int val){
    value = val;
}

int Integer::getValue() const{
    return value;
}

void Integer::setValue(int val){
    value = val;
} 
