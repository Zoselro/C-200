#include<iostream>
#include<string>

using namespace std;

/*
생성자 초기화 방법
1. 기본 생성자를 명시적으로 정의하여 멤버 변수들을 초기화
2. 복수(다중) 생성자를 통해 매개 변수타입을 받아 멤버 변수를 다르게 초기화
3. default 생성자를 통해 기본 생성자를 명시적으로 선언하고, 기본 생성자를 컴파일러가 자동으로 생성
4. 생성자 초기화 리스트를 이용하여 변수를 초기화
*/

class Class0{
public:
    void print(){
        cout << number << ", " << str << endl;
    }
    double getdouble(){
        return d;
    }
protected:
    double d = 2.25;

private:
    int number;
    string str;
};

class Class01 : public Class0{
public:
    void print(){
        cout << getdouble() << endl;
        cout << d << endl;
    }
};

class Class1{
public:
    Class1(){
        number1 = 1;
        number2 = 2;
        name = "null";
    }
    Class1(int num1, int num2){
        number1 = num1;
        number2 = num2;
    }

    class1(string name){
        this->name = name;
    }

    void print(){
        cout << number1 << ", " << number2 << ", " << name << endl;
    }

private:
    int number1;
    int number2;
    string name;
};

class Class2{
public:
    Class2() : number1(10), name("name"){
        number2 = 30;
    }

    Class2(int num1, int num2, string name){
        number1 = num1;
        number2 = num2;
        this->name = name;
    }

    void print(){
        cout << number1 << ", " << number2 << ", " << name << endl;
    }

private:
    int number1;
    int number2;
    string name;
};


int main(){
    Class0 c0;
    c0.print();
    cout << c0.getdouble() << endl;;

    Class01 c01;
    c01.print();

    Class1 c1;
    c1.print();

    Class1 *c2 = new Class1(999,110);
    c2->print();

    Class2 c3;
    c3.print();
    return 0;
}