#include <iostream>
using namespace std;
#include<string>

int main(){
    int one = 1;                                    // one변수를 1로 초기화
    int two = 2;                                    // two변수를 2로 초기화
    int sum = one + two;                            // sum 변수를 one과 two를 합한 값으로 초기화

    cout << "1 + 2 = " << sum << endl;              // "1 + 2 = " 는 문자열이고, 실제로는 1과 2를 더한 값을 저장한 sum 을 출력

    return 0;
}