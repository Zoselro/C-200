#include<iostream>

using namespace std;

int main(){
    double pi_d = 3.14;
    float pi_f = 3.14f;                     // f를 붙히는 이유 : 기본적으로 실수형은 8byte인 double형으로 인식을 하기에, float형 이라고 인식할 수 있게 f를 붙인다.

    cout << "pi_d = " << pi_d << endl;
    cout << "pi_f = " << pi_f << endl;
    
    return 0;
}

