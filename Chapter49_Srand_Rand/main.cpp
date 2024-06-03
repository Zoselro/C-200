#include<iostream>
#include<ctime>

using namespace std;

int main(){
    // 난수의 씨앗을 심는 과정, 현재시간을 기준으로 하는이유는 같은수 예를들어 srand(999); 를 하게되면 랜덤한 숫자가 동일한 숫자로 반복되어 나온다.
    srand(static_cast<unsigned int>(time(NULL)));
    
    for (int i = 0; i < 5 ; i++){
        cout << "난수 : " << rand() << endl;
    }
    
    return 0;
}


