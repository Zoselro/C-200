#include<iostream>

using namespace std;

class Building1{
protected:
    void Name() {
        cout << "노른자 위 좋은 건물";
    }
};

class BuildingOwner : public Building1{ // 한 클래스가 다른 클래스를 포함하고 그 특성이 변하지 않고 소유하는 관계를 Has-A 라고 한다.
public:
    void MyBuilding(){
        cout << "내 보물 : ";
        Name();
    }
};

int main(){
    BuildingOwner envious;
    envious.MyBuilding();

    return 0;
}