#include<iostream>
#include<experimental/filesystem>
#include<fstream>

using namespace std;

namespace fs = std::experimental::filesystem; // filesystem 관련 함수와 클래스에 접근 가능

int main(){
    fs::current_path(); // 프로젝트의 폴더를 알아 낼 수 있다.
    fs::exists("C://target") // 존재하면 1(true), 존재하지 않으면 0(false) 리턴


    //하위 폴더 목록 확인
    string directory = "C:/Program Files";
    for(auto& name : fs::directory_iterator(directory)) // directory경로에 있는 각 파일이나 디렉토리에 대해 출력한다.
        cout << name << '\n';

    fs::create_directory("temp"); // temp 디렉토리 생성
    fs::copy("temp", "temp_copy"); // temp 디렉토리를 copy 하여 temp 디렉토리 내에 있는 모든 파일을 "temp_copy" 디렉토리 생성과 동시에 copy
    fs::remove("temp"); // temp 디렉토리 및 하위에 있는 파일 삭제
    fs::remove("temp_copy"); // temp_copy 디렉토리 및 하위에 있는 파일 삭제

    ifstream stream;
    stream.open("D:/Visual Code C++ 200/Chapter97_103_File_Folder/096.txt");
    stream.good(); // 파일이 존재하면 1(true), 파일이 존재하지 않으면 0(false) 리턴
    stream.close(); // 파일 닫기

    int size = fs::file_size("D:/Visual Code C++ 200/Chapter97_103_File_Folder/096.txt"); // 파일의 크기 알아내는 함수

    return 0;
}