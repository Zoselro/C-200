#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Class1{
public:
    int m;

    Class1(int n){
        m = n;
        cout << "Class1 생성자 호출 : " << m << endl;
    }
    ~Class1(){
        cout << "Class1 소멸자 호출" << endl;
    }

    void Print(){
        cout << "Class1 Print : " << m << endl;
    }
};

static class Class2{
public:
    static Class1 classA;

    Class2(){
        cout << "Class2 생성자 호출" <<endl;
    }
    ~Class2(){
        cout << "Class2 소멸자 호출 " << endl;
    }
} calc;

void Set(int n){
    static Class1 test(n);
    cout << "set 함수 호출 " << endl;
    test.Print();
}

Class1 Class2::classA(5);

int main(){
    calc.classA.Print();
}