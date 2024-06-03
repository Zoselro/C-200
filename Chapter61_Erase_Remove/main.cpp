#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    string sentence = "i like cioding";

    auto rem = remove(sentence.begin(),sentence.end(),'i');

    sentence.erase(rem,sentence.end());

//    sentence.erase(remove(sentence.begin(),
//    sentence.end(), 'i'),sentence.end());   // i 의 모든 위치값을 erase함수에 리턴한 후, erase에서 리턴받은 위치에서 끝까지의 모든 해당 문자를 제거
    
    cout << sentence << endl;

    return 0;
}