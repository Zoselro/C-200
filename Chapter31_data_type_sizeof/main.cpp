#include<iostream>

using namespace std;

class Temp {
    int no;
    bool is_on;
};

class Temp2{};

class Temp3{
    double a;
    char b;
};

int main(){
                                                           //패딩(Padding)은 메모리 정렬(alignment)을 맞추기 위해 데이터 구조에 추가되는 여분의 바이트를 의미
    cout << "char의 크기 : " << sizeof('p') << endl;
    cout << "int 크기 : " << sizeof(10) << endl;
    cout << "double 크기 : " << sizeof(10.0) << endl;
    cout << "클래스1의 크기 : " << sizeof(Temp) << endl;    //패딩 으로 인하여 class 내에서 int형으로 선언한 변수가 가장 큰 수 이므로, int 4byte, bool형 1byte에 padding 3byte 총 8byte
    cout << "클래스2의 크기 : " << sizeof(Temp2) << endl;    // 빈 클래스여도 고유한 주소를 가져야 되므로 크기는 최소 1byte로 설정
    cout << "클래스3의 크기 : " << sizeof(Temp3) << endl;   // 패딩 으로 인하여 class 내에서 double형으로 선언한 변수가 가장 큰 수 이므로, double 8byte, char형 1byte에 padding 7byte 총 16byte
    return 0;
}
