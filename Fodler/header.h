#include <iostream>
using namespace std;

#define INTERVAL_WRITE2MICOM || 0
#if (INTERVAL_WRITE2MICOM == 0)
void func(){
    std::cout << "define" << endl;
}
#endif
#if (INTERVAL_WRITE2MICOM == 1)
void func(){
    std::cout << "no define" << endl;
}
#endif