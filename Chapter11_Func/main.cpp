#include<iostream>

using namespace std;

void sub(const int x, const int y){                     // 매개변수로 const int x, const int y를 받는다.
    cout << "x - y = " << x - y << endl;                // sub 연산을 한 형태로 출력을 해준다.
}

int add(const int x, const int y){                      // 매개변수로 const int x, const int y를 받는다. int형으로 두 정수의 합을 리턴
    cout << "x + y = " << x + y << endl;                // add 연산을 한 형태로 출력을 해준다.
    return x + y;                                       // 반환형을 지정해둔 상태로 return문을 적지 않는다면 오류 발생
}

int main(){
    sub(10, 5);                                         // 출력만 해주고 , void형태로 함수를 선언했기에, 리턴값은 없는 형태

    add(2, 6);                                          // 출력을 해주고, int형태로 함수를 선언했기에, 리턴값은 int형으로 반환받은 형태

    int a = add(2, 6);                                  // int형으로 반환을 받았기에 반환값을 int형 변수에 대입해줄수 있다.

    cout << "a : " << a << endl; 

    return 0;
}

