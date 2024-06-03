#include<iostream>
#include<ctime>

using namespace std;

int main(){

    time_t now = time(NULL);// 날짜와 시간을 얻을 수 있는 변수 (하지만 지금은 비어있음)
    tm* ptm = localtime(&now);// tm은 int 날짜와 시간 값을 가져오는 구조체 변수 
    char buffer[80];
    // 3번째 인자의 문자열을 2번째 인자의 크기 만큼 1번째 배열에 할당하는 역할을 담당
    strftime(buffer, sizeof(buffer), "%Y년 %m월 %d일, %H시 %M분 %S초 입니다.(%p)\n", ptm);
    printf("오늘 날짜와 시간 : %s", buffer);

    return 0;
}

/*
tm 구조체 구성
int tm_sec [0, 60]
int tm_min [0, 59]
int tm_hour [0, 23]
int tm_mday [0, 31]
int tm_mon [0, 11]
int tm_year years since 1900
int tm_wday [0, 6]
int tm_yday [0, 365]
int tm_isdst
*/