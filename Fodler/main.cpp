#include <iostream>
#include "header.h"

using namespace std;

int main(){
#if (INTERVAL_WRITE2MICOM == 1)
    func();
#endif
#if (INTERVAL_WRITE2MICOM == 0)
    func();
#endif
    return 0;
}