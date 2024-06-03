#include<iostream>

using namespace std;

int main(){
    int n = 10;
    int m = 9;
    int k = 99;
    
                                                        // 값 변경 가능, 주소값 변경 불가
    int* const p1 = &n;                                                     // 상수 포인터
    *p1 = 30;
                                                        //p1 = &m;
    cout << "*p1 : " << *p1 << ", n : " << n << endl;
                                                        // 값 변경 불가능, 주소값 변경 가능
    int const* p2 = &m;                                                     // 상수 지시 포인터
    //*p2 = 899;
    cout << "*p2 : " << *p2 << endl;
                                                        // 값 변경 불가능, 주소값 변경 불가능
    const int *const p3 = &k;                                                   // 포인터를 가르키고 있는 상수 포인터
    cout << "*p3: " << *p3 << endl;
                                                        //*p3 = 456;
                                                        //p3 = &n;
    return 0;
}
