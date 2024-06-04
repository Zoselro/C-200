#include <iostream>
#include <string>

using namespace std;

struct Princess{
    string name;
    string father;
    string birthday;
} jungso;

void Print1(Princess *who){
    cout << "jungso.name = " << who->name << endl;
    cout << "jungso.father = " << who->father << endl;
    cout << "jungso.birthday = " << who->birthday << endl;
}

void Print2(Princess &who){
    who.name = "name";
    who.father = "father";
    who.birthday = "birthday";
    cout << "jungso.name = " << who.name << endl;
    cout << "jungso.father = " << who.father << endl;
    cout << "jungso.birthday = " << who.birthday << endl;
}

int main(){
    jungso.name = "정소공주";
    jungso.father = "조선 태종";
    jungso.birthday = "1412년";

    Print1(&jungso);

    Print2(jungso);

    cout << jungso.name << endl;
    cout << jungso.father << endl;
    cout << jungso.birthday << endl;
    return 0;
}