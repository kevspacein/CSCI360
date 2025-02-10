//Fraction.h
#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
#include <numeric>

  class Fraction{
        private:
            int numerator;
            int denominator;
        public:
            Fraction(); //(Default constructor)
            Fraction(int num, int denom); //(Parameterized constructor)
            Fraction(const Fraction& other); //(Copy constructor)
            int getNumerator() const; //(Getter for the numerator)
            int getDenominator() const; //(Getter for the denominator)
            void setNumerator(int numo); //(Setter for the numerator)
            void setDenominator(int deno); //(Setter for the denominator)
            void print() const; //(Method to display the fraction)
            void simplify(); //(Method to reduce the fraction to its simplest form)

            Fraction operator+(Fraction& other);
            Fraction operator-(Fraction& other);
            Fraction operator*(Fraction& other);
            Fraction operator/(Fraction& other);
  };
  
#endif