#include<iostream>
#include<string>

using namespace std;

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
    
protected:
    int number = 10;
    string name1 = name_;
};

int main(){
    KingInfo king_info;
    king_info.SetName("조선 세조 이유");

    cout << king_info.GetName() << endl;

    return 0;
}