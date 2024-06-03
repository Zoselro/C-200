#include<iostream>
#include<string>                                                              // 최신버전에서는 #include<string>을 하지 않아도, 
                                                                             //  표준라이브러리 에서 string 클래스를 제공을 하고있기에 선언을 하지 않아두 되긴 하지만, 명시적으로 표시를 해주는게 좋다.

using namespace std;

int main(){
    int integer = 100;                                                       // 정수만 담을 수 있다.
    
    char ch = 'C';                                                               // 문자형 변수는 문자 하나만 저장이 가능하다.
    
    int ch2 = 'c';                                                           // 'c'는 아스키 코드상 67 이기때문에 정수형으로 67로 대입할 수 있다.

    double precision = 3.14159;                                              // float이라는 자료형도 있지만, double형 보다는 정밀도가 떨어지기에 잘 쓰지 않는다.

    bool is_true = true;                                                         // true, false 둘 중 하나의 값만 갖기에 true, false만 할당할 수 있다.

    string world = "Hello World";                                               // 숫자,문자,특수문자를 섞어서 사용이 가능하다.
    string str = "abc";
    string str2 = "def";
                                
    cout << "int : " << integer << endl;
    cout << "char : " << ch << endl;
    cout << "string : " << world << endl;
    cout << "double : " << precision << endl;
    cout << "boolean : " << is_true << endl;
    cout << "ch2 : " << ch2 << endl;

    cout << "---------------------------" << endl;
    cout << "ch + ch2 : " << ch + ch2 << endl;                          // 아스키 코드상 C는 97 c는 65 이기때문에 67 + 99 = 166이 나온다.
    cout << "ch + ch2 : " << string(1, ch) + string(1, ch2) << endl;    // 단순히 문자 + 문자 = 문자열 출력은 어렵기에 두 문자를 string 객체로 변환하여 결합한다.
    cout << "str + str2 : " << str + str2 << endl;                       // 문자열 + 문자열을 통해 문자열 붙이기가 가능하다.
    cout << "str + ch : " << str + ch << endl;                           // 문자열 + 문자를 통해 붙이기가 가능하다.
    return 0;
}