#include<iostream>

using namespace std;

int main(){
    int x = 2;
    double y = 4.4;

    int i = static_cast<int>(y / x);
    int j = (int)y / x;                                             // c++ 에서는 가급적 사용하지 않기
  
    cout << "4.4 / 2 = (static_cast<int>) " << i << endl;
    cout << "4.4 / 2 = (int) " << j << endl;
    
    // static_cast<>
    // dynamic_cast<> // 모호한 타입 캐스팅 오류를 막아줌
    //const_cast<> // 자료형이 갖고 있는 상수 속성을 제거
    //reinterpret_cat<> // 어떠한 포인터 타입끼리도 변환할 수 있게 도움

    const int n = 20;
    const int *p = &n;
    int *p2 = const_cast<int *>(p);
    *p2 = 30;

    

    cout << "n : " << n << endl;
    cout << "*p : " << *p << endl;
    cout << "*p2 : " << *p2 << endl;

    cout << "&n : " << &n << endl;
    cout << "&p : " << &p << endl;
    cout << "&p2 : " << &p2 << endl;

    cout << "-------------------" << endl;

    return 0;
}