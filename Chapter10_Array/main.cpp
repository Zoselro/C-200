#include<iostream>
#include<string>
using namespace std;

int main(){
    const int kArraySize = 3;                                       // 배열의 크기를 나타내는 상수선언

    int founding[kArraySize];                                       // 배열 0~2는 현재 쓰레기값이 들어가있는 상태

    founding[0] = 918;                                              // [0] 918로 초기화
    founding[1] = 1392;                                             // [1] 1392 로 초기화
    founding[2] = 1948;                                             // [2] 1948 로 초기화

    cout << "고려 건국 연도 : " << founding[0] << endl;
    cout << "조선 건국 연도 : " << founding[1] << endl;
    cout << "한국 건국 연도 : " << founding[2] << endl;

    cout << "--------- 배열,반복문 적용 후 ----------" << endl;

    string str[] = {"고려","조선","건국"};
    int s_size = sizeof(str) / sizeof(string);

    for(int i = 0 ; i < s_size ; i++){
        cout << str[i] << " 건국 연도 : " << founding[i] << endl;
    }



    return 0;
}


