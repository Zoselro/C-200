#include<iostream>
#include<string>
using namespace std;

int main(){

    string str = "aaaa";

    cout << "str.capacity() : " << str.capacity() << endl; // 이 객체가 사용중인 메모리 크기 (가변)
    cout << "str.length() : " << str.length() << endl; // 이 객체의 문자열 길이를 반환(length랑 size는 동일)
    cout << "str.size() : " << str.size() << endl; // 이 문자열의 size 
    cout << "str.append : " << str.append("abc") << endl; // 문장 뒤에 더해주고 싶은 경우
    cout << "str.insert(2,\"bbbb\") : " << str.insert(2,"bbbb") << endl; // 문자열에서 인덱스가 2인곳에 "bbbb"를 삽입
    str = "abcdefg";
    cout << "str.replace(2,4,\"kkkkk\") : " << str.replace(2,4,"kkkkk") << endl; // 문자열에서 인덱스가 2인 문자 문자부터 4개의 문자를 "kkkkk" 로 대체 --> cdef 이 문자가 kkkkk 로 대체
    cout << "str.erase(1,4) : " << str.erase(1,4) << endl; // 문자열 인덱스가 1 인 문자부터 4개를 부분적으로 지우기
    cout << "str.substr(2) : " << str.substr(2) << endl; // 인덱스 2부터 끝까지의 문자열을 반환
    cout << "str.substr(2,4) : " << str.substr(2,4) << endl; // 인덱스 2부터 4개의 문자열을 반환

    string str3 = "abcabcabc";
    cout << "str3.find(a) : " << str3.find("b") << endl; // 문자열이 존재하는경우 index 반환 , 존재하지 않으면 -1 반환
    cout << "str3.at(1) : " << str3.at(1) << endl; // 해당 인덱스번호의 문자열을 char형으로 반환

    // 문자열 전체를 int형으로 변환하는 경우
    string str4 = "2000";
    int a = stoi(str4);

    cout << "int a : " << a << endl;

    // string의 문자 한 개를 숫자로 변환하는 경우
    str4 = "2000";
    string temp;
    temp = str4[0];
    int b = stoi(temp);
    cout << "int b : " << b << endl;


    // 숫자 타입의 데이터를 스트링 타입으로 변경
    int c = 12;
    string str5;
    str5 = to_string(c);

    cout << "str5 : " << str5 << endl;

    // 인덱스 번호 위치에 있는 값을 대문자로 변경
    str5 = "1abcd";
    str5[2] = toupper(str[2]);
    cout << str5 << endl;

    // 인덱스 번호 위치에 있는 값을 소문자로 변경
    str5[4] = tolower(str5[4]);
    cout << str5 << endl;

    // 문자가 숫자인지 아닌지 판별 0 : false , 1 : true
    cout << "isdigit(str5[0]) : " << isdigit(str5[0]) << endl;
    cout << "isdigit(str5[4]) : " << isdigit(str5[4]) << endl;

    // 문자가 영어인지 아닌지 판별
    cout << "isalpha(str5[0]) : " << isalpha(str5[0]) << endl;
    cout << "isalpha(str5[4]) : " << isalpha(str5[4]) << endl;

    // 문자열을 서로 교환
    str = "abcd";
    str3 = "aaaa";

    str.swap(str3);
    
    cout << "str : " << str << endl;
    cout << "str2 : " << str3 << endl;

    cout << "-=-------------------" << endl;

    // 맨뒤의 문자열을 pop 하거나 push 함
    str = "abcd";
    str.pop_back();
    cout << "str : " << str << endl;

    str.push_back('k');
    cout << "str : " << str << endl;

    cout << "-=-------------------" << endl;

    // front : 첫 번째 문자를 반환, back : 마지막 문자를 반환
    cout << "str.front() : " << str.front() << endl;
    cout << "str.back() : " << str.back() << endl; 
    return 0;
}