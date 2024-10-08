#include<iostream>
using namespace std;
#include "header.h"

int HexaAdd::AND(int x, int y){
    int z = x & y;
    return z;
}

int HexaAdd::OR(int x, int y){
    int z = x | y;    
    return x | y;
}

int HexaAdd::NOT(int x){
    x = ~x;
    return x & 1;
}

int HexaAdd::XOR(int x, int y){
    int z = (x | y) & ~(x & y);
    return z;
}


int HexaAdd::sub(int x[8], int y[8], int out[8]){

    int one[8] = {0, 0, 0, 0, 0, 0, 0, 1};
    int y_complement[8] = {};
    int carry = 0;
    int size = sizeof(one) / sizeof(int);
    int temp = 0;

    for(int i = 0 ; i < size ; i++){
        y[i] = NOT(y[i]); 
    }

    for(int i = size-1 ; i >= 0 ; i--){
        carry = y[i] + one[i] + carry;

        if(carry == 0){
            if(y[i] == 0 && one[i] == 0)
                y_complement[i] = 0;
            else
                y_complement[i] = 1;
        }

        if(carry == 1){
            y_complement[i] = 1;
            carry /= 2;
        }

        if(carry == 2){
            y_complement[i] = 0;
            carry /= 2;
        }

        if(carry == 3){
            y_complement[i] = 1;
            carry /= 2;
        }
    } 

    carry = 0;

    for(int i = size - 1 ; i >= 0 ; i--){
        carry = y_complement[i] + x[i] + carry;

        if(carry == 0){
            if(y_complement[i] == 0 && x[i] == 0){
                temp = carry;
                out[i] = 0;

            }
            else{
                temp = carry;
                out[i] = 1;

            }
        }
        if(carry == 1){
            temp = carry;
            out[i] = 1;
            carry /= 2;
        }
        if(carry == 2){
            temp = carry;
            carry /= 2;
            out[i] = 0;
        }
        if(carry == 3){
            temp = carry;
            out[i] = 1;
            carry /= 2;
        }
    }
    if(temp < 2) return 0; 
    else if(temp > 2) return 1; // underflow 발생
    else return -1; // Error 발생
}