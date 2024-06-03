#include<iostream>
#include<string>

using namespace std;

int main(){
    string sentence = "i like coding";
    string find_str = "coding";
    string replace_str = "history";
    sentence.replace(sentence.find(find_str),
    find_str.length(), replace_str);

    cout << "sentence : " << sentence << endl;
    //sentence.replace(0,0,"aaaaa");
    return 0;
}
//    string.replace(교체하고 싶은 문자열의 위치, 교체하고 싶은 문자열의 길이, 새로운 문자열)