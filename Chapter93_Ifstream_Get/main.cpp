#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream read;

    read.open("D:/Visual Code C++ 200/Chapter93_Ifstream_Get/093.txt", 
    ifstream::in);


    if (!read.is_open()){
        cout << "파일을 열 수 없습니다." << endl;
        return 1;
    }

    char line;
    while(read.get(line)){
        cout << line;
    }

    cout << endl;

    read.close();

    return 0;
}
