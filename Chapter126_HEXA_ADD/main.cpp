#include <iostream>
#include "header.h"
#include <string.h>
#include <stdlib.h>
using namespace std;

typedef enum {
    Premium_Gen_6 = 0x00,
    Standard_Gen_6 = 0x01,
    MTXPIO = 0x02,
    TCI_P = 0x03,
    Platform_MAX
}Platform;

class IhuManager{
    static GetInstance();
}

int main(){
    
    int x[8] = {1, 1, 1, 1, 1, 0, 1, 1}; // 155
    int y[8] = {0, 0, 0, 1, 0, 1, 1, 1}; // 217
    int z[8] = {};
    HexaAdd hx;
    cout << "리턴 값 : " << hx.sub(x,y,z) << endl;

    for(int i = 0 ; i < 8 ; i++){
        cout << z[i] << " ";
    }

    char strVehicleType[32];
    memset(&strVehicleType, 0x00, sizeof(strVehicleType)); 
    strncpy(strVehicleType, "MX5", sizeof("MX5"));
    
    cout << "sizeof : " << sizeof(strVehicleType) << endl;

    cout << Platform::Premium_Gen_6 << endl;
    cout << Platform::Standard_Gen_6 << endl;
    cout << Platform::MTXPIO << endl;
    cout << Platform::TCI_P << endl;
    cout << Platform::Platform_MAX << endl;

    if(sizeof(strVehicleType) == 0){
        cout << "실행" << endl;
    }else{
        throw;
    }


    switch(1){
        case 1:
            cout << endl;
        default:
            cout << endl;
    }

    return 0;
}