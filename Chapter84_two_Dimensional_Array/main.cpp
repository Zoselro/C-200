#include<iostream>

using namespace std;

int main(){
    int data1[2][2] = {1, 2, 3};
    int data2[2][3] = { {1, } };

    for (int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 2 ; j++)
            cout << "data1[" << i << "][" << j <<
             "] = " << data1[i][j] << endl;
    }

    cout << endl;


    int k = 0;
    for (int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cout << "data2[" << i << "][" << j <<
             "] = " << data2[i][j] + k << endl;
            k++;
        }
    }
    
    return 0;
}
