#include <iostream>

using namespace std;

int GetOne(){
    return 2;
}

int Plus(int x, int y = GetOne(), int z = 1){
    return x + y + z;
}

int main(){
    int num1 = Plus(1);
    int num2 = Plus(1,2);
    int num3 = Plus(1,2,3);

    cout << "num1 : " << num1 << ", num2 : " << num2 << ", num3 : " << num3 << endl;

    return 0;
}