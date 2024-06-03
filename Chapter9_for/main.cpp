#include<iostream>

using namespace std;

int main(){
    int sum = 0;
    int sum2 = 0;

    int one = 1;
    int two = 2;

    for(int i = 0 ; i < 5 ; i++){                               // i를 0으로 초기화 한 후 i가 5보다 작을 때 까지 반복 시행, 만약 i가 5가 될 경우 조건문에서 5 < 5 에서 false 이므로 반복문 중단
        cout << i << endl;
        sum += one;
        sum2 += two;
    }
    cout << "sum : " << sum << endl;
    cout << "sum2 : " << sum2 << endl;

    int i = 0; 
    for( ; ; ){                                                 // 무한 반복문
        if(i == 11) break; // 
        cout << "i : " << i << endl;
        i ++;
    }
    
    cout << "반복문 빠져 나온 후 i : " << i << endl;

    return 0;
}
