#include<iostream>

using namespace std;

void Func1(bool *is_on, int *num){
    *is_on = false;
    *num = 999;
    cout << "Call by address : " << sizeof(is_on) << endl;
    cout << "Call by address : " << sizeof(num) << endl; 
    cout << "Call by address , is_tmp의 주소 : " << &is_on << endl;
    cout << "Call by address , &n의 주소 : " << &num << endl;
}

void Func2(bool &is_on, int & num){
    cout << "Call by reference : " << sizeof(is_on) << endl;
    cout << "Call by reference : " << sizeof(num) << endl;
    cout << "Call by reference , is_tmp의 주소 : " << &is_on << endl;
    cout << "Call by reference , &n : " << &num << endl;
}

int main(){
    bool is_tmp = true;
    int n = 100;
    cout << "is_tmp의 주소 : " << &is_tmp << endl;
    cout << "&n의 주소 : " << &n << endl;

    Func1(&is_tmp,&n);
    Func2(is_tmp,n);

    cout << "값 변경후 is_tmp : " << is_tmp << endl;
    cout << "값 변경후 n : " << n << endl;


    return 0;
}
