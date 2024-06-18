#include<iostream>
#include<string>

using namespace std;

class Class1{
public:
    Class1() = default; // 기본생성자 자동 생성, 멤버변수를 모두 초기화
public:
    int number;
    double prime;
    string word;
    int *p;
};

class Class2{
public:
    Class2() { }; // 기본생성자 제공 x, 멤버변수 초기화 x
    void print(){
        cout << number << ", " << prime << ", " << word << ", " << *p << endl;
    }
public:
    int number;
    double prime;
    string word;
    int *p = &number;
};

int main(){
    Class1 *class1 = new Class1();

    cout << "Class1 : " << class1->number << ", " << class1->prime << ", " << class1->word << ", " << class1->p << endl;

    Class2 *class2 = new Class2();
    class2->print();

    return 0;
}