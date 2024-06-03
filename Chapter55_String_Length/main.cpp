#include<iostream>
#include<string>

using namespace std;

int main(){
    string jinduk_name = "김승만";      // 각 한글 문자가 UTF-8로 인코딩된 문자열을 사용할 때 한 글자당 3바이트를 차지하기 때문
    string jinsung_name = "kim man";

    cout << "진덕여왕 이름 길이 : " 
    << jinduk_name.length() << endl;
    cout << "진성여왕 이름 길이 : " 
    << jinsung_name.length() << endl;

    return 0;
}