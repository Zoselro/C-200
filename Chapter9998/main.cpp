#include<iostream>
using namespace std;


class Class1{
public:
	friend class Class2; // friend로 선언된 클래스는 private에 접근이 가능

	friend void Get(Class1 c1){ // frined 함수 Get은 Class1 객체의 private 멤버에 직접 접근이 가능하게 된다.
        cout << c1.a << endl;
	}

	void Set(int n){
		a = n;
	}
private:
	int a;
};

class Class2 : public Class1{ // Class1에 대한 상속을 받음. 원래라면 private에는 직접 접근이 불가능하지만, Class1에서 Class2를 friend class로 선언을 했기 때문에 직접 접근이 가능
public:
    //Class1의 private 접근제한자 에 접근이 가능
};

int main(){
	Class1 c1; // Class1에 대한 private 변수 a에 대해 직접 접근
    c1.Set(50);
    Get(c1);
	return 0;
}
