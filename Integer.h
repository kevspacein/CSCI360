//Integer.h
#ifndef INTEGER_H
#define INTEGER_H

class Integer {
    private:
        int value;
    public:
        Integer();
        Integer(int val); 
        int getValue() const; 
        void setValue(int val); 
};

#endif