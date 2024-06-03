#include<iostream>

using namespace std;

int main(){
    int num = 0;

    while (num < 10){
        num ++;

        if (num % 3 == 0)
            continue;
        else   
            cout << "num 값 : " << num << endl;
    }

    return 0;
}
