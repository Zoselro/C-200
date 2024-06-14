#include<iostream>
#include<string>

using namespace std;

struct Data1{
    string name;
    int birthday;
    int number;
    Data1(string s, int b, int n) : name(s),birthday(b),number(n) {}
}; //생성자를 통한 구조체 초기화

struct Data2{
    Data1 data1;
    int number;
    
// Data2 구조체 안에 Data1 구조체를 선언, 생성자를 통해 초기화를 했기 때문에 
//명시적으로 값을 할당받는다. 이후 Data2 객체 안 변수 number은 10으로 초기화
    Data2() : data1("java",19000101,43){ 
        number = 10;
    }
} data2;

    //Call by reference로 값을 변경
void change(Data2& who, string name, int birthday, int number){
    who.data1.name = name;
    who.data1.birthday = birthday;
    who.data1.number = number;
}

struct human{
    string name;
    int number;
}NAME[2]; // 구조체 배열로 미리 변수를 선언 가능

struct Info{
    string name;
    int number;
    human n;
};

int main(){
    Data1 data1("C++", 19960328, 42);
    Data2 data2; // data2.data1 에는 "java", 19000101, 43 데이터가 있음
    Info in; // Info 구조체 안에 name 구조체를 선언

    NAME[0] = {"C#", 1}; // 구조체 초기화
    NAME[1] = {"Python", 2};
    in.n.name = "language"; // Info 내에서 선언된 구조체 human의 name에 대한 값
    in.n.number = 20; // Info 내에서 선언된 구조체 human의 number에 대한 값
    data2.number = 999;

    change(data2,"gyu",17000101,20); // data2 구조체 내에 선언된 data1 구조체의 값을 변경 시도
    return 0;
}

