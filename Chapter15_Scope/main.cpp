#include<iostream>

using namespace std;

int x = 10;                                         // 전역변수에 x = 10 대입 

int func1(){
    int y = x + 10;                                 // func1() 함수 내에 y = x(전역변수에 선언된 변수) + 10 을 대입
    return y;                                       // 그 수를 반환
}

int func2(){
    int x = 100;                                    // func2() 함수내에 int x = 100 선언
    return x;                                       // x를 선언 한 것을 반환
}

int func3(){
    return x;                                       // 전역변수에 있는 x = 10값을 리턴
}

int main(){
    int x = 999;

    cout << "y = " << func1() << endl;              // func3()에서 리턴받은 y값을 출력
    cout << "x = " << func2() << endl;              // func2()에서 리턴받은 x값을 출력
    cout << "x = " << func3() << endl;              // func3()에서 리턴받은 전역변수x를 출력
    
    cout << "x = " << ::x << endl;                  // 범위 지정 연산자를 통해 전역변수 내에 있는 x 값을 출력
    cout << "x = " << x << endl;                    // main함수내에 있는 x 값을 출력
    cout << "::x + x = " << ::x + x << endl;        // 전역변수 x + main함수 내에 있는 x 값을 출력


    return 0;
}