#include<iostream>

using namespace std;

int main(){

    double x = 5.7;
    int div1 = static_cast<int>(x / 5);
//    double mod1 = x - 5 * static_cast<int>(x / 5); // x - 5 는 0.7이며, double형으로 변수값을 지정했기 때문에 mod1의 변수값은 0.7이 된다.
//->double mod1 = static_cast<int>(x - 5 * static_cast<int>(x / 5)); // 이렇게 하면 % 연산자로 계산한 값과 동일하게 나온다.
    double mod1 = x - 5 * div1;


    int y = 10.5;
    int div2 = static_cast<int>(y / 2);
    double mod2 = y % 2; // double 형이더라도 % 연산자의 return 값은 정수형으로 나머지가 0으로 나오게 된다.

    cout << "5.7 / 5 = 몫 : " << div1 << ", 나머지 : " << mod1 << endl;
    cout << "10 / 2 = 몫 : " << div2 << ", 나머지 : " << mod2 << endl;

    
    return 0;
}