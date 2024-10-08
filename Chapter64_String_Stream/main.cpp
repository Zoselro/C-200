#include<iostream>
#include<sstream>
#include<string>

using namespace std;

int main(){

    stringstream ss;
//    double number1 = 0.0;
//    ss << "1.2,2.6-3.8!4.7!8.0!8.9";
    char number1 = ':';
    ss << "abc:def:ghi:jkl";
    cout << "== string to double ==" << endl;

    while (!ss.eof()){
        ss >> number1;
        ss.ignore();
        cout << number1 << ", ";
    }

    //stringstream 초기화
    ss.clear();
    ss.str("");

    ss << "1, " << "2" << 3 << " " << 4; // 새로운 문자열을 stringstream에 넣음

    int number2 = 0;

    cout << endl << "== string to int ==" << endl;

    while(!ss.eof()){
        ss >> number2;
        ss.ignore();

        cout << number2 << ", ";
    }

    return 0;
}