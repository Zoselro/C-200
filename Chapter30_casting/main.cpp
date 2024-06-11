#include<iostream>
#include<string>

using namespace std;


int main(){
    int number1 = 65; 
    double number2 = 2.4;
    int number3 = (double)number1 / number2;

    number3 = int(number2);
    double number4 = double(number1 / number2);
    double num4 = static_cast<double>(number1 / number2);
    char ch = char(number1);

    int num3 = static_cast<int>(number2);
    char ch2 = static_cast<char>(number1);
    
    cout << "num3 : " << num3 << endl;
    cout << "num4 : " << num4 << endl;
    cout << "ch : " << ch2 << endl;

    cout << "------------" << endl;

    cout << "number1 : " << number1 << endl;
    cout << "number2 : " << number2 << endl;
    cout << "number3 : " << number3 << endl;
    cout << "number4 : " << number4 << endl;
    cout << "ch : " << ch << endl;
    
    char a = 10;
    int *p = (int*)&a;
//    *p = 5;
    cout << "*p : " << *p << endl;

//    char a = 10;
//    int *p static_cast<int*>(&a);



    return 0;
}

// 명시적 형변환 : 일반적인 기본형의 명시적 형변환이 안되는 케이스가 존재함
// 그러므로 static_cast 같은 형변환이 필요
// static_cast 형변환이 이루어지면 안되는 것을 오류로 띄우면서 막아줌