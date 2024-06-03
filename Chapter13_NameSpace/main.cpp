#include<iostream>
using namespace std;
/*
namespace는 동일한 이름으로 함수 또는 변수를 선언해야 될 때 필요하다.
그렇기에 명시적으로 범위 지정 연산자를 통해 접근하여 baekjae::year과 같이 사용 할 수 있다.
같은 성격의 함수과 변수라도 서로 다른값을 할당해 사용할 수 있어 코드 유지보수에 효율적이다.
*/

namespace silla{
    int year = 935;

    void CentralArea(){
        cout << "경상도" << endl;
    }
}

namespace baejae{
    int year = 660;

    void CentralArea(){
        cout << "충청도" << endl;
    }
}

using namespace silla;
using namespace baejae;

int main(){
    cout << "신라 중심지 : ";
    silla::CentralArea();
    cout << "신라 멸망 연도 : " << silla::year << endl;

    cout << "백제 중심지 : ";
    baejae::CentralArea();
    cout << "백제 멸망 연도 : " << baejae::year << endl;

    return 0;
}