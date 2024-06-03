#include<iostream>

using namespace std;

int main(){
    int x = 1;
    int y = 2;
    int z = 0;

    z = x > y ? x : y; // x > y 가 true 이면, z = x 대입, x > y 가 false 이면, z = y 대입

    cout << "x와 y중 더 큰 값은 ? " << z << endl;

    int a = 220;
    int b = 3;
    int c = 0;
    int d = 126;
    int k = 0;

    k = d > a ? a : b < d ? c : d;// d > a 가 true 이면 k = a 이고, false면, b < d ? c : d 연산 수행
    
    cout << "k = " << k << endl;

    k = a < b ? c : d < c ? b : c ? a : c; 
    // a < b 가 true 이면, k = c false 이면 k = d < c ? b : c ? a : c
    // d < c 가 true이면, k = b, false 이면, k = c ? a : c 
    // 여기서 c 가 true 이면 k = a, false 이면 k = c 입니다.
    // c = 0(false) 이므로 k = 0 입니다.
    
    cout << "k = " << k << endl;

    k = d ? a < b >= c : d; // d = 126 이며 항상 true 이므로 k = a < b >= c 이며, a < b 는 false 이므로 0 이고, 0 >= c 는 true 이므로 결과값은 k = 1  

    cout << "k = " << k << endl;

    return 0;
}