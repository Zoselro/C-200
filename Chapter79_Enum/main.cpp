#include<iostream>

using namespace std;

enum Status{
    normal = 0,
    abnormal,
    disconnect,
    close
};

int main(){

    Status num = close;

    if (num == Status::normal)
        cout << "Status : normal" << endl;
    else if (num == abnormal)
        cout << "Status : abnormal" << endl;
    else if (num == 101)
        cout << "Status : disconnect" << endl;
    else
        cout << "Status : close" << endl;

    return 0;
}
