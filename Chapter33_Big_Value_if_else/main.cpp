// else if문은 조건문 분기에서 if의 조건이 참이 되면, else if는 실행되지 않고 넘어간다.
// if문은 if문의 참 거짓에 상관없이 if문은 무조껀 실행 된다.
#include<iostream>

using namespace std;


int main(){

    int num1 = 100;
    int num2 = 200;
    int num3 = 300;

    if (num1 > num2 && num1 > num3)
        cout << "가장 큰 수 num1 : " << num1 << endl;
    else if (num2 > num1 && num2 > num3)
        cout << "가장 큰 수 num2 : " << num2 << endl;
    else if (num3 > num1 && num3 > num2)
        cout << "가장 큰 수 num3 : " << num3 << endl;
    else
        cout << "찾을 수 없음" << endl;
    return 0;
}