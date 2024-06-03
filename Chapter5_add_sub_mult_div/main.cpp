#include<iostream>

using namespace std;

int main(){
    int one = 1;
    int two = 2;
    int three = 3;
    int four = 4;

                                                                // 변수간에 연산이 가능하다.
    cout << "1 + 3 = " << one + three << endl;
    cout << "4 - 2 = " << four - two << endl;
    cout << "2 * 3 = " << two * three << endl;
    cout << "4 / 2 = " << four / two << endl;

                                                                // 곱하기와 나누기가 섞여있을 경우 곱하기와 나누기를 먼저 한다.
    cout << "2 + 3 * 4 = " << two + three * four << endl;
    cout << "1 + 4 / 2 = " << one + four / two << endl; 

    return 0;
}