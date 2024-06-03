#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string str = "gfedcba321321";

    reverse(str.begin()+1, str.end()-1);

    cout << str << endl;

    return 0;
}