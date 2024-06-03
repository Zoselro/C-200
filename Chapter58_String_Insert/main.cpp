#include<iostream>
#include<string>

using namespace std;

int main(){
    string sentence = "i coding";
    sentence.insert(2, "hate ");        // i hate coding
    cout << sentence << endl;

    sentence.insert(7, "or like ");         // i hate or like coding
    cout << sentence << endl;

    return 0;
}
