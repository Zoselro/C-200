#include<iostream>
#include<fstream>
#include<string>
#include<sstream>

using namespace std;

int main(){
    ifstream read;
    cout << "-----------한 글자씩 읽기------------" << endl;
    read.open("D:/Visual Code C++ 200/Chapter93_103_File_Function/093.txt", 
    ifstream::in);

    if (!read.is_open()){
        cout << "파일을 열 수 없습니다." << endl;
        return 1;
    }

    char lineC; // 파일을 한 글자씩 읽기
    while(read.get(lineC)){
        cout << lineC;
    }
    cout << endl;

    read.close();

    cout << "-------한 줄 씩 읽기-------" << endl;
    read.open("D:/Visual Code C++ 200/Chapter93_103_File_Function/093.txt", 
    ifstream::in);

    string lineS; // 파일을 한 줄 씩 읽기
        while(getline(read,lineS)){
        cout << lineS << endl;
    }

    read.close();
    
    cout << "파일 내용을 모두 읽기" << endl;

    //파일을 읽기 위한 입력 스트림
    ifstream ifs("D:/Visual Code C++ 200/Chapter93_103_File_Function/093.txt"
    , ifstream::in); // 읽기모드로 파일 Open

    stringstream ss; // stringstream 객체 ss 생성
    ss << ifs.rdbuf(); // 파일 스트림의 버퍼를 stringstream에 저장

    string read1 = ss.str(); //stringstream을 string으로 변환

    cout << endl << read1 << endl; // 결과 출력
    
    read.close() // 파일 닫기
    
    cout << "------ 파일 쓰기 -----" << endl; 
    
    
    
    return 0;
}

