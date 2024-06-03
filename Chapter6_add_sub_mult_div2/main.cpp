#include<iostream>

using namespace std;

int main(){
                                                    //변수 초기화
    int two = 2;
    int eight = 8;
    int sum1 = 2;
    int sum2 = 2;
    
                                                    //연산 축약
    sum1 = sum1 + two;                              // sum1 += two
    sum2 += eight;                                  // s um2 = sum2 + eight;

    cout << "sum1 = " << sum1 << endl;
    cout << "sum2 = " << sum2 << endl;

                                                    //sum 변수 초기화
    sum1 = 2;
    sum2 = 8;

                                                    //이후 연산축약
    sum1 *= two;                                    // sum1 = sum1 * two;
    sum2 /= eight;                                   // sum2 = sum2 / eight;

    cout << "sum1 = " << sum1 << endl;
    cout << "sum2 = " << sum2 << endl;

    return 0;                                       // 프로그램 종료
}