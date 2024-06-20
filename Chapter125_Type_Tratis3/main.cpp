#include<iostream>
#include<string>
#include<type_traits>
#include<typeinfo>

using namespace std;

template <typename T1, typename T2>
bool TmpFunc(T1 x, T2 y){
    typename conditional<is_same<T1, T2>::value, int, double>::type type1;

    return is_same<decltype(type1), double>::value;
}


int main(){
    bool isDouble = TmpFunc(1, 22.3);

    if (isDouble)
        cout << "double 자료형입니다." << endl;
    else   
        cout << "double 자료형이 아닙니다." << endl;
    
    return 0;
}