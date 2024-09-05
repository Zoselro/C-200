#include <iostream>
#include "header.h"

using namespace std;

int main(){
    int x[8] = {1, 1, 1, 1, 1, 0, 1, 1}; // 155
    int y[8] = {0, 0, 0, 1, 0, 1, 1, 1}; // 217
    int z[8] = {};
    HexaAdd hx;
    cout << "리턴 값 : " << hx.sub(x,y,z) << endl;

    for(int i = 0 ; i < 8 ; i++){
        cout << z[i] << " ";
    }

    return 0;
}