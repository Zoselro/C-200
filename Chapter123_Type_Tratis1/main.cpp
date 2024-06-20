#include<iostream>

using namespace std;

enum TmpEnum { 
    red,
    blue,
    wine,
};
enum class TmpEnumClass : int { 
    red1,
    blue2,
    wine3
 };

int main(){
    
    cout << red << endl;
    cout << static_cast<int>(TmpEnumClass::red1) << endl;
    
   // cout << boolalpha;
    
    cout << "== is_integeral ==" << endl;
    cout << is_integral<TmpEnum>::value << endl;
    cout << is_integral<TmpEnumClass>::value << endl;
    cout << is_integral<signed int>::value << endl;
    cout << is_integral<unsigned int>::value << endl;
    cout << is_integral<double>::value << endl;
    cout << is_integral<bool>::value << endl;

    cout << "== is_enum ==" << endl;
    cout << is_enum<TmpEnum>::value << endl;
    cout << is_enum<TmpEnumClass>::value << endl;
    cout << is_enum<int>::value << endl;

    cout << "== is_signed ==" << endl;
    cout << is_signed<TmpEnum>::value << endl;
    cout << is_signed<signed int>::value << endl;
    cout << is_signed<unsigned int>::value << endl;

    cout << is_class<TmpEnumClass>::value << endl;
    cout << is_class<TmpEnum>::value << endl;

    return 0;
}