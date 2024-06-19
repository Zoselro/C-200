#include<iostream>

using namespace std;


/*
Not - A 란 클래스간의 직접적인 관계가 없는것을 말한다.
따라서 상속이나 포함관계가 필요하지 않는 경우가 Not-A에 해당한다.
*/
class Landload{
public:
    void Iamlandload(){
        cout << "건물주 입니다." << endl;
    }
};

class MapleMonkey{
public:
    void favorite(){
        cout << "Favorite : Femail Monkey" << endl;
    }
};

class Nation : public Landload{
public:
    void who(){
        cout << "안녕하세요";
        Iamlandload();
    }
};

int main(){
    Nation nation;
    nation.who();

    return 0;
}
