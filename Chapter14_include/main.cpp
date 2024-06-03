#include <iostream>
#include <vector>
#include "header.h"
#define TEST 1
#define AAA

/*
1.    include <filename>
2.    include "filename"

1. C++ 기본으로 제공해주는 라이브러리를 사용할 때 사용
2. 사용자가 만든 다른파일을 참조 할 때 사용
*/

using namespace std;

//cout << number << endl; 전역 범위에서는 함수나 클래스 외부에서 코드를 실행할 수 없다.
int main(){
    vector<int> exam; // int형 Vector을 변수 exam에 선언
    exam.push_back(10); // 정수형 10 push
    exam.push_back(20); // 정수형 20 push
    exam.push_back(30); // 정수형 30 push

    for (int i = 0 ; i < 3 ; i ++){
        cout << "Vector value : " << exam.at(i) << endl; // 벡터값을 순차적으로 출력 
    }
    
    func(); // 분할 컴파일 -> 컴파일 완료 후 링커를 통해 하나의 실행 파일로 완성
    // main.o, func.o 파일 생성후 링커를 통해 하나의 파일로 완성

    
    // 조건부 컴파일

    #if TEST == 0 // #TEST == 0 이면 컴파일 수행, TEST는 1이므로 수행 안함
    cout << exam.at(0) << endl;
    #endif

    //define으로 정의되어 있다면 컴파일을 수행 #define AAA 가 정의 되어 있으므로 실행
    #ifdef AAA
    cout << exam.at(1) << endl;
    #endif

    return 0;
}