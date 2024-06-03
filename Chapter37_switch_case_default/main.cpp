#include<iostream>
#include<string>
using namespace std;

int main(){
    int num = 3;

    switch(num){
        case 1:
            cout << "num 값은 1입니다." << endl;
            break;
        case 2:
            cout << "num 값은 2입니다." << endl;
            break;
        case 3:
            cout << "num 값은 3입니다." << endl;
            break;
        default:
            cout << "num값을 알 수 없습니다." << endl;
            break;
    }

    return 0;
}
