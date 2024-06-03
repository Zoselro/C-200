#include<iostream>

using namespace std;

int main(){
    const int GREATE_VICTORY_SALSU = 612;                                           // const는 상수를 말하며, 프로그램이 종료되기 전까지는 상수값이 변할 수 없다.
    const int GREATE_VICTORY_GWIJU = 1019;

    //GREATE_VICTORY_SALSU = 512; 에러 발생 read-ony variable
    //GREATE_VICTORY_GWIJU = 919; read-only variable

    cout << "고구려 살수대첩 연도 : " << GREATE_VICTORY_SALSU << "년" << endl;      // 이 연도는 절대 변하면 안되는 수 이며, const로 선언을 해야된다.
    cout << "고려 귀주대첩 연도 : " << GREATE_VICTORY_GWIJU << "년" << endl;
    
    return 0;
}