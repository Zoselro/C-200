#include<iostream>
#include<string>

using namespace std;

class KingInfo{
public:
    KingInfo(){
        name_ = "조선 예종 이황";
        number = 10;
    };
    
    string GetName() const{
        return name_;
    }
    int GetNumber() const{
        return number;
    }

private:
    string name_;
    int number;
};

int main(){
    KingInfo king_info;

    cout << king_info.GetName() << endl;
    cout << king_info.GetNumber() << endl;
    
    return 0;
}