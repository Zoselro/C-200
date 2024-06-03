#include<iostream>
#define KSIZE 3
using namespace std;

int main(){

    int num[KSIZE] = { 10, 20, 30 };
    int *p1 = num;
    
    for (int i = 0 ; i < KSIZE ; i++){
        cout << "p1 [" << i << "] = " << *(p1 + i) << endl;
    }


    int no1 = 1;
    int no2 = 2;
    int no3 = 3;

    int *p2[KSIZE] = { &no1, &no2, &no3 };

    for (int i = 0 ; i < KSIZE ; i++){
        cout << "p2 [" << i << "] = " << *p2[i] << endl;
    }

    return 0;
}