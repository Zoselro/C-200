#include<iostream>
#include<string>

using namespace std;

int main(){
    int number1 = 10;
    double number2 = 67.8;
    float number3 = 45.2f;

    string no_str1 = to_string(number1);
    string no_str2 = to_string(number2);
    string no_str3 = to_string(number3);

    cout << "number1 : " << number1 << endl;
    cout << "number2 : " << number2 << endl;
    cout << "number3 : " << number3 << endl;
    return 0;
}