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

void HexaAdd::sub(int x[8], int y[8], int out[8]){

    int one[8] = {0, 0, 0, 0, 0, 0, 0, 1};
    int sum[8];
    int carry = 0;

    for(int i = 0 ; i < 8 ; i++){
        y[i] = NOT(y[i]); 
        sum[i] = XOR(y[i],one[i]); // 1의 보수 값 더함
    }

    for(int i = 7 ; i >= 0 ; i--){
        carry = sum[i] + x[i] + carry;

        if(carry == 0){
            out[i] = 1;
        }
        if(carry == 1){
            out[i] = 1;
            carry = 0;
        }
        if(carry == 2){
            carry /= 2;
            out[i] = 0;
        }
        if(carry == 3){
            carry /= 2;
            out[i] = 1;
        }
    }

    for(int i = 0 ; i < 8 ; i++){
        cout << out[i] << " ";
    }
}