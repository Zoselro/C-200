#include<iostream>

using namespace std;

int main(){

    int num = 0;
    do{
        num ++;
    
        if (num % 3 == 0)
            continue;
        else
            cout << "num 값 : " << num << endl;
    }while (num < 10);

    num = 0;

    do{ 
        cout << "한번은 실행" << endl;
        cout << "num 값 : " << num << endl;
    }while(num > 100);

    return 0;
}
