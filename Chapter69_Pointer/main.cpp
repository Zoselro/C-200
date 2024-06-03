#include<iostream>

using namespace std;

int main(){
    int num1 = 10;
    int *p1 = &num1;

    double num2 = 23.4;
    double *p2 = &num2;

    cout << "num1 : " << num1 << " (size : " <<
     sizeof(num1) << ")" << endl;

    cout << "p1 : " << p1 << " (size : " << 
    sizeof(p1) << ")" << endl;

    cout << "num2 : " << num2 << " (size : " << 
    sizeof(num2) << ")" << endl;

    cout << "p2 : " << p2 << " (size : " << 
    sizeof(p2) << ")" << endl;

   return 0;
}
