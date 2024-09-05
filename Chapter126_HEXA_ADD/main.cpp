#include <iostream>
#include "header.h"

using namespace std;

int main(){
    int x[8] = {1, 0, 0, 1, 1, 0, 1, 1}; // 155
    int y[8] = {1, 1, 0, 1, 1, 0, 0, 1}; // 217
    int z[8];

    HexaAdd hx;
    
    hx.sub(x,y,z);

    return 0;
}