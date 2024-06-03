#include<iostream>

using namespace std;

int main(){
    int x = 1;

    cout << "x = " << x++ << endl;              // 사용 후 증가 x = 1 (내부적으로는 x = 2)
    cout << "x = " << x++ << endl;              // 사용 후 증가 x = 2 (내부적으로는 x = 3)
    cout << "x = " << ++x << endl;              // 증가 후 사용 (x = 4)
    cout << "x = " << x-- << endl;              // 사용 후 감소 x = 4 (내부적으로는 x = 3)
    cout << "x = " << x-- << endl;              // 사용 후 감소 x = 3 (내부적으로는 x = 2)
    cout << "x = " << --x << endl;              // 감소 후 사용 x = 1

    for(int i = 0 ; i < 10 ; ++i){

        cout << "i 값 : " << i << endl;
    }

    return 0;
}


                                                // x++, x-- 후위 연산자
                                                // ++x, --x 전위 연산자