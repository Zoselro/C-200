#include<iostream>
#include<string>

using namespace std;

/*
name_ 이라는 private 접근 지정자를 가진 문자열 멤버 변수를 선언 후
생성자에서 직접 초기화를 하지 않았으므로, 기본적으로 빈 문자열 "" 로 초기화
*/

class KingInfo{
public:
    void SetName(string name){
        name_ = name;
    }

    string GetName() const{
        return name_;
    }

private:
    string name_;
};

int main(){
    KingInfo king_info;
    king_info.SetName("조선 세조 이유");

    cout << king_info.GetName() << endl;

    return 0;
}