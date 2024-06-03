#include<iostream>
#include<string>

using namespace std;

int main(){
    string sentence = "i hate coding";
    cout << "erase 하기전 sentence : " << sentence << endl;
    
    sentence.erase(2, 7);
    cout << "erase 한 후 sentence : " << sentence << endl;
    return 0;
}

