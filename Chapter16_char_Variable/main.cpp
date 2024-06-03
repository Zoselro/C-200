#include<iostream>

using namespace std;

int main(){
                                                /* 일반적으로 char 범위는 -127 ~ +127 이지만,
                                                    unsigned char 범위는 0 ~ 255 로 변경되고, 기호가 없는 char형태 이므로 양수만 저장한다.    
                                                */
    
    char ch1 = 'c';                              // signed char ch1 = 'c';
    char ch2 = 200;                             // -127 ~ +127 범위를 벗어났기에 출력이 되지 않는다.
    
    unsigned char ch3 = 'C';
    unsigned char ch4 = 200;

    printf("char ch1 = %c , %d\n", ch1, ch1); // 아스키 코드상 c는 정수형으로 99이므로 출력
    printf("char ch2 = %c , %d\n", ch2, ch2); // 128 - 200 = -72로 최소범위 -127에서 72가 증가한 -56이 출력 -> 200을 이진수로 한 후 비트를 뒤집고 보수를 취하여 1을 더하면 -56
    printf("char ch3 = %c , %d\n", ch3, ch3); // 아스키 코드상 c는 정수형으로 67이므로 출력
    printf("char ch4 = %c , %d\n", ch4, ch4); // unsigned로 선언된 char형의 범위는 0 ~ 255 이므로 온전한 200이 출력 하지만 아스키 코드상 200번째 문자는 존재하지 않으므로 출력 x
    
    return 0;
}