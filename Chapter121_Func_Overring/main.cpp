#include<iostream>

using namespace std;

class Base{
public:
    void Display(){
        cout << "안녕하세요" << endl;
    }
};

class Derived : Base{
public:
    void Display(){
        cout << "hello" << endl;
    }
};

int main(){
    Derived child;
    child.Display();

    return 0;
}