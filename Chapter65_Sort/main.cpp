#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string sort_str1 = "gojoseon";
    string sort_str2 = "AaBbCcDdEe";
    string int_num = "95a71b12c64d56";

    sort(sort_str1.begin(), sort_str1.end());
    sort(sort_str2.begin(), sort_str2.end());
    sort(int_num.begin(), int_num.end());

    cout << "소문자만 정렬 : " << sort_str1 << endl;
    cout << "대문자만 정렬 : " << sort_str2 << endl;
    cout << "숫자 정렬 : " << int_num << endl;

    return 0;
}

