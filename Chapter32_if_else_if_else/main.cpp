// else if 문은 2번 3번 이용하는것은 프로그램 성능에도 좋지 않고, 조건문이 길어지면 가독성도 떨어지기 때문에 한 번만 사용 하는것을 권장한다.
// 중첩 조건문이 2개 이상이라면 switch ~ case문을 사용하는 것을 권장
#include<iostream>

using namespace std;


int main(){
    int number1 = 100;
    int number2 = 6;

    if(number1 < number2)
        cout << "number2가 더 큽니다." << endl;
    else if(number1 > number2)
        cout << "number1이 더 큽니다." << endl;
    else
        cout << "number1과 number2는 같습니다." << endl;

    if(number2 < 7){
        if(number2 > 3){
            if(number2 == 4)
                cout << "number2는 4 입니다." << endl;
            else if(number2 == 5)
                cout << "number2는 5 입니다." << endl;
            else
                cout << "number2는 6입니다." << endl;
        }
        else{
            if(number2 == 3)
                cout << "number2는 3입니다." << endl;
            else if(number2 == 2)
                cout << "number2는 2 입니다." << endl;
            else
                cout << "number2는 1이하 입니다." << endl;    
        }
    }
    return 0;
}