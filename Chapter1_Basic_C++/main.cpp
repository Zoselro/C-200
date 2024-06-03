#include<iostream>                                                  // cout, endl 등을 사용하려면 헤더파일을 선언을 해주어야된다.

using namespace std;

int main(){                                                         // main 함수는 한 프로젝트에 하나만 선언 해야된다.

    cout << "hello C++ World!" << endl;                                // << 이후 문자 혹은 문자열을 적으면 화면에 출력 
                                                                     // endl 은 End Line의 약자이며, Enter와 같은 역할

    std::cout << "Hello C++ World!" << std::endl;                   // :: 는 범위 지정 연산자

    return 0;                                                       // main 함수에서 프로그램 종료를 알릴때 return 0; 를 적는다.
}

                                                                    // 번외로 using namespace std 에서의 using은 사용하겠다. namespace는 동일명의 함수 또는 변수가 
                                                                    // 있는것을 구분지어 사용할 때 사용을 한다.
                                                                    // using namespace std 안에 있는 모든 함수를 사용을 하겠다 라는 의미로 해석이 가능하다.