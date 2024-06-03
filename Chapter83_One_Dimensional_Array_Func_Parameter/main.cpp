#include<iostream>

using namespace std;

void print1(int *arr){
    cout << "== Print1 == " << endl;
    cout << arr[0] << ", " << arr[1] <<
    ", " << arr[2] << endl;

    arr[1] = 1000;
}

void print2(int arr[]){
    cout << "== Print2 == " << endl;
    cout << arr[0] << ", " << arr[1] <<
    ", " << arr[2] << endl;

    arr[2] = 2000;
}

int main(){
    int data[3] = { 0, 1, 2};// 배열을 선언할 경우 배열의 첫 번째 요소에 대한 포인터로 해석을 할 수 있다.
    int data2 = 10;// 일반 변수는 포인터가 아니기 때문에 포인터 연산을 할 수 없다.
    int data3 [2][2];

    print1(data);
    print2(data);

    cout << "== 결과 ==" << endl;
    cout << data[0] << ", " << data[1] <<
    ", " << data[2] << endl;

    return 0;
}
