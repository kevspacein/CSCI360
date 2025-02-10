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
    int i=  1;
    int gcd = 0;

    while (i<= numerator && i <= denominator){
        if (numerator % i == 0 && denominator % i == 0){
            gcd = i;
        }
        ++i;
    }
    
    numerator = numerator/gcd;
    denominator = denominator/gcd;
    
}

//Operation Overloaders  
Fraction Fraction::operator+(Fraction& other){
    int newnumo;
    if(getDenominator()==other.getDenominator()){
        newnumo= getNumerator() + other.getNumerator();
    }
    else{
        newnumo = ((getNumerator() * other.getDenominator()) + (getDenominator()* other.getNumerator()));
    }
    int newdeno = (getDenominator() * other.getDenominator());

    Fraction newfrac(newnumo,newdeno);

    return newfrac;
    
}
            
            
Fraction Fraction::operator-(Fraction& other){
    int newnumo = ((getNumerator() * other.getDenominator()) - (getDenominator()* other.getNumerator()));
    int newdeno = (getDenominator() * other.getDenominator());

    Fraction newfrac(newnumo,newdeno);

    return newfrac;
}
Fraction Fraction::operator*(Fraction& other){
    int newnumo = getNumerator() * other.getDenominator();
    int newdeno = (getDenominator() * other.getNumerator());

    Fraction newfrac(newnumo,newdeno);

    return newfrac;
}

Fraction Fraction::operator/(Fraction& other){
    Fraction flip(other.getDenominator(), other.getNumerator());

    int newnumo = getNumerator() * flip.getNumerator();
    int newdeno = (getDenominator() * flip.getDenominator());

    Fraction newfrac(newnumo,newdeno);

    return newfrac;
}