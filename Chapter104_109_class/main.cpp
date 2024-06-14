#include<iostream>
#include<string>

using namespace std;

/*자식 클래스는 부모 클래스에 접근이 가능하지만 private 멤버는 접근 불가(상속 관계)
자식 클래스에서는 부모 클래스의 protected 멤버인 b에 접근할 수 있음
자식클래스는 부모클래스의 protected에 접근가능
자식클래스는 부모 클래스의 public에 접근 가능
자식클래스는 부모클래스의 private 으로 선언한 변수에 접근 불가
*/
class KingInfo{
public:
    string abc = "abc";

    void SetName(string name){
        name_ = name;
    }

    string GetName() const{
        return name_;
    }
protected:
    string name = "protected";
private:
    string name_;
};

class King : protected KingInfo{ // KingInfo 의 public 멤버는 protected로 바뀐다.
public:
    string model = "AAA";
};

class King_Small : protected King{ // King의 public, protected 멤버는 protected로 바뀐다.

};

class father : private KingInfo{ // KingInfo의 public 멤버와 protected 멤버가 private 멤버로 바뀐다. 
public:
    string model = "BBBB";
};

class mother : public KingInfo{ // KingInfo의 public 멤버는 그대로 유지된다.
public:
    string model = "CCCC";
};

int main(){
    mother m;
    m.abc;

    return 0;
}