#include<iostream>

using namespace std;

int main(){

    for(int i = 1 ; i < 10 ; i++){
        for(int j = 1 ; j < 13 ; j++){
            cout << j << " * " << i << " = " << i * j << "\t";
            if(j == 12)
            cout << endl;
        }
    }
    cout << "----------------- 15단 출력 -----------------" << endl;

    int offset = 0;

    for (int i = 1; i <= 15; i += offset){
        for(int j = 1; j <= 9 ; j++){
            cout << i << " * " << j << " = " << i * j;
            for(int k = 0; k < offset; k++){
                cout << "\t";
                cout << (i + k + 1) << " * " << j << " = " << (i + k + 1) * j;
            }
        cout << endl;
        }
        cout << endl;
        offset++;
    }
    
    return 0;
}
