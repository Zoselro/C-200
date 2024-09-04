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
    int z = x ^ y;
    return z;
}

void HexaAdd::sub(int x[8], int y[8], int out[8]){

    int one[8] = {0, 0, 0, 0, 0, 0, 0, 1};
    int sum[8];

    for(int i = 0 ; i < 8 ; i++){
        y[i] = NOT(y[i]); 
        sum[i] = XOR(y[i],one[i]); // 1의 보수 값 더함
    }
}