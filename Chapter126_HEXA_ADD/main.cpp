#include <iostream>
#include "header.h"

using namespace std;

int main(){
    int x[8] = {0, 0, 0, 1, 1, 0, 1, 1}; // 27
    int y[8] = {0, 0, 0, 1, 1, 0, 0, 1}; // 25
    int z[8];
    
    HexaAdd hx;
    
    hx.sub(x,y,z);
    
    return 0;
}