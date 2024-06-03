#include<iostream>

using namespace std;

int g_num = 100;

int func1(){
    return g_num++;
}

int func2(){
    return g_num++;
}

int main(){

    int num = g_num++;

    cout << "main num : " << num << endl;
    cout << "func1 num : " << func1() << endl;
    cout << "func2 num : " << func2() << endl;

    return 0;
}
