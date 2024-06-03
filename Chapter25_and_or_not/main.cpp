#include<iostream>

using namespace std;

int main(){
    int x = 10;
    int y = 20;

    bool is_x = true;
    bool is_y = false;

    if (is_x == true && is_y == true){                                      // 둘 다 참이면
        cout << "is_x && is_y = " << "true" << endl;
    }
    else{
        cout << "is_x && is_y = " << "false" << endl;
    }

    if ( x == 10 || is_x == false){                                           // 둘 중에 하나라도 참이면
        cout << "x가 10이거나 is_x가 true 입니다." << endl;
    }
    else{
        cout << "x는 10이 아니며, is_x도 false가 아닙니다." << endl;
    }

    if(!is_y){                                                                   // false의 not 은 true 이므로 ..
        cout << "is_y 원래 값은 false 입니다." << endl;
    }
    else{
        cout << "is_y 원래 값은 true 입니다." << endl;
    }

    return 0;
}