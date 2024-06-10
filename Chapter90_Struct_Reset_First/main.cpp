#include<iostream>

using namespace std;
struct Data1{
    Data1(int x) : number(x){}                      //  number 멤버 변수를 매개변수 x로 초기화

    int number;
};

struct Data2{
    Data2(){
        number = 10;                        // 기본 생성자이며, 이 생성자는 number 멤버 변수를 10으로 초기화
    }

    int number;
} data2;

struct Data3{
    Data3(const int x) : number(x){}

    const int number;
};

int main(){
    Data3 data3(30);
    Data1 data1(2);
    cout << "Data1 number : " << data1.number << endl;
    cout << "Data2 number : " << data2.number << endl;
    cout << "Data3 number : " << data3.number << endl;

    //data3.number = 300; //assignment of read-only member 'Data3::number'

    return 0;
}
