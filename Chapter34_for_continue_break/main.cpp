// 조건문에서 결과가 true 이면 그 문장을 수행을 하고, false 이면, else if로 빠지고,
// else if에서도 결과값이 false 이면, else 구문을 수행하여 i값을 출력
#include<iostream>

using namespace std;


int main(){

    int num = 7;

    for (int i = 0 ; i < 10 ; i ++){
        if (i % 3 == 0)
            continue;
        else if (i == num)
            break;
        else
            cout << "현재 i 값 : " << i << endl;
    }

    for (int i = 0 , j = 100 ; i < 3 && j > 80 ; i++ , j--){
        cout << " i : " << i << endl;
        cout << " j : " << j << endl;
    }

    

    return 0;
}
