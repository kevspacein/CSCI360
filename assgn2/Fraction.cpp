//Fraction.cpp
#include "Fraction.h"

#include <numeric> 

Fraction::Fraction(){
    numerator = 0;
    denominator = 1;
} 

Fraction::Fraction(int num, int denom){
    numerator = num;
    denominator = denom;
}

Fraction::Fraction(const Fraction& other){
    numerator = other.getNumerator();
    denominator = other.getDenominator();
}

int Fraction::getNumerator() const{
    return numerator;
}

int Fraction::getDenominator() const {
    return denominator;
}
void Fraction::setNumerator(int num){
    numerator = num;
}

void Fraction::setDenominator(int denom){
    denominator = denom;
}

void Fraction::print() const{
    std::cout<<getNumerator()<<"/"<<getDenominator();
}
void Fraction::simplify(){
    numerator= std::gcd(numerator,denominator);
    denominator= (denominator/std::gcd(numerator,denominator));
}
            
Fraction Fraction::operator+(Fraction& other){
    int newnumo = ((getNumerator() * other.getDenominator()) + (getDenominator()* other.getNumerator()));
    int newdeno = (getDenominator() * other.getDenominator());

    Fraction newfrac(newnumo,newdeno);

    return newfrac;
    
}
            
            
Fraction Fraction::operator-(Fraction& other){
    
}
Fraction Fraction::operator*(Fraction& other){

}

Fraction Fraction::operator/(Fraction& other){

}