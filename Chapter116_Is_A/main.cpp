#include<iostream>

using namespace std;

// has-A 처럼 한 클래스가 다른 클래스를 포함하여 사용을 하지만, 포함 시킨 클래스는 특성을 확장하여 사용 하는 것을 말한다.
class Landload{
public:
    void IamLandload() {
        cout << "건물주 입니다." << endl;
    }
};

class Tenant{
public:
    void IamTenat(){
        cout << "세입자 입니다." << endl;
    }
};

class Nation : public Landload, public Tenant{
public:
    void who(){
        cout << "저는 ";
        if (is_landload == true)
            IamLandload();
        else   
            IamTenat();
    }

public:
    bool is_landload;
};

int main(){
    Nation nation;
    nation.is_landload = true;
    nation.who();

    return 0;
}