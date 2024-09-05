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

void HexaAdd::sub(int x[8], int y[8]){

    int out[8] = {};
    int one[8] = {0, 0, 0, 0, 0, 0, 0, 1};
    int sum[8] = {};
    int y_complement[8] = {};
    int carry = 0;
    int size = sizeof(one) / sizeof(int);

    for(int i = 0 ; i < size ; i++){
        y[i] = NOT(y[i]); 
        //sum[i] = XOR(y[i],one[i]); // 1의 보수 값 더함
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
    }

    for(int i = 0 ; i < size ; i++){
        cout << y_complement[i] << " ";
    }
    cout << endl;

    for(int i = 0 ; i < size ; i++){
        cout << x[i] << " ";
    }
    cout << endl;

    carry = 0;

    for(int i = size - 1 ; i >= 0 ; i--){
        carry = y_complement[i] + x[i] + carry;

        if(carry == 0){
            if(y_complement[i] == 0 && x[i] == 0){
                out[i] = 0;

            }
            else{
                out[i] = 1;

            }
        }
        if(carry == 1){
            out[i] = 1;
            carry /= 2;
        }
        if(carry == 2){
            carry /= 2;
            out[i] = 0;
        }
        if(carry == 3){
            out[i] = 1;
            carry /= 2;
        }
    }
    for (int i = 0 ; i < size ; i++){
        cout << out[i] << " ";
    }
}