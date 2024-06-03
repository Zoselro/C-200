#include<iostream>
#include<string>
#include<vector>

using namespace std;

int pointerFunc(vector<string> *info){
    if (info->empty() == true)
        return 0;
    else 
        return sizeof(info);
}

int main(){
    vector<string> message;
    //벡터에 문자열 추가
    message.push_back("고려 장군");
    message.push_back("척준경!");
    message.push_back("절친 이름은");
    message.push_back("... 무엇일까");

    cout << "포인터 인자 크기 : " << pointerFunc(&message) << endl;
    cout << "원래 변수 크기 : " << sizeof(message) << endl;

    return 0;
}

