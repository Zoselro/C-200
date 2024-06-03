#include<iostream>
using namespace std;

int main(){
    int positive = 100;
    int negative = -200;
    int ascii_value = 'A';
    unsigned int negative2 = -100;

    cout << "양수 값 : " << positive << endl;
    cout << "음수값 : " << negative << endl;
    cout << "아스키 코드 값 : " << ascii_value << endl;         // 아스키 코드상 'A'는 65번째 이므로 65 출력
    cout << "unsigned 음수값 : " << negative2 << endl;         // unsigned int 의 범위는 0 ~ 4294967295 이며, 음수를 할당 하게 되면, 그 값에 대해 비트를 뒤집고 보수를 취하여 1을 더한 수 만큼 빼준다.
    return 0;
}