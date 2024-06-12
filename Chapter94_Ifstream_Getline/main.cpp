#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    ifstream file;
    file.open("D:/Visual Code C++ 200/Chapter95_Stringstream/093.txt", 
    ifstream::in);

    string line;

    if (!file.is_open()){
        cout << "파일을 열 수 없습니다." << endl;
        return 1;
    }

    while (getline(file, line))
        cout << line << endl;

    file.close();

    return 0;
}