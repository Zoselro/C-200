#include<iostream>
#include<string>

using namespace std;

class GoodKing;
class BadKing;

class Info{
    friend class GoodKing;
public:
    Info() { };

private:
    string achieve;
};

class GoodKing : public Info{
public:
    GoodKing() {
        achieve = "백제 중흥 군주 근초고왕";
    }
    void Display(){
        cout << achieve << endl; // Info에서 친구 클래스로 선언을 했기 때문에 private에 접근 가능
    }
};

class BadKing : public Info{
public:
    BadKing() {}
    void Display(){
        //cout << achieve << endl;// private에는 접근 불가
    }
};

int main(){
    GoodKing king1;
    king1.Display();

    BadKing king2;
    king2.Display();

    return 0;
}