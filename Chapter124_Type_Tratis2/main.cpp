#include<iostream>
#include<map>

using namespace std;

struct TmpStruct{
    int x = 0;
};

class TmpClass{

};
class TmpClass2{

};

int main(){
    //cout << boolalpha;

    cout << "== is_empty==" << endl;
    cout << is_empty<TmpStruct>::value << endl;
    cout << is_empty<TmpClass>::value << endl;

    cout << "== is_array ==" << endl;
    cout << is_array<TmpStruct>::value << endl;
    cout << is_array<TmpClass>::value << endl;
    cout << is_array<int[3]>::value << endl;

    cout << "== is_same ==" << endl; // 두 형식을 비교 했을 때 같다면 true, 다르면 false 리턴
    cout << is_same<TmpClass,TmpClass2>::value << endl;
    cout << is_same<signed int, int>::value << endl;
    cout << is_same<char, unsigned char>::value << endl;
    cout << is_same<bool, int>::value << endl;
    cout << is_same<int,double>::value << endl;

    cout << is_class<TmpClass>::value << endl;

    return 0;
}