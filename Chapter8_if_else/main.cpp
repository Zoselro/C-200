#include<iostream>

using namespace std;

int main(){
    int x = 10;
    int y = 1;
    bool boolean = true;
    bool boolean2 = false;

    cout << "true ? false ? : " << boolean << endl;             // 1이면 true, 0이면 false
    cout << "true ? false ? : " << boolean2 << endl;            // 1이면 true, 0이면 false

    if(x > y)                                                   // if는 0이 아닌값은 모두 참으로 실행
        cout << "x는 y보다 큽니다." << endl;
    else                                                        // false 일때
        cout << "x는 y보다 작습니다." << endl;
    return 0;
}