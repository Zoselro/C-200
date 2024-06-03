#include<iostream>
#include<string>

using namespace std;

int main(){
    string seven_war = "임진왜란";
    string korea_war = "한국전쟁";
    string seven_war2 = "임진왜란";

    cout << "seven_war.compare(korea_war) : " 
    << seven_war.compare(korea_war) << endl;
    cout << "seven_war.compare(seven_war2) : " 
    << seven_war.compare(seven_war2) << endl;

    if (seven_war.compare(korea_war) == 0)
        cout << "같은 문자열입니다.";
    else
        cout << "다른 문자열입니다.";

    return 0;
}
