#include<iostream>
#include<cmath>

double sqrtFunction(double);

using namespace std;

int main(){
    cout << "4의 제곱근 : " << sqrt(4.0) << endl;
    cout << "16의 제곱근 : " << sqrt(16) << endl;
    cout << "64의 제곱근 : " << sqrt(64) << endl;
    cout << "256의 제곱근 : " << sqrt(256.7) << endl;
    cout << "114의 제곱근 : " << sqrt(114.9) << endl;    
    cout << "112의 제곱근 : " << sqrtFunction(-112) << endl;
    cout << "112의 제곱근 : " << sqrt(-112) << endl;
    return 0;
}

double sqrtFunction(double n){
    
    if(n < 0){
        cout << "음수 제곱근은 허수 입니다.";
        return -1;
    }

    double s = 0;
    double t = 0;

    s = n / 2;
    for (;s != t;)
    {
        t = s;
        s = ((n / t) + t) / 2;
    }
    return s;
}