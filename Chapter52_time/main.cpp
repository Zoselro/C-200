#include<iostream>
#include<ctime>

using namespace std;

int main(){
    time_t start = time(NULL);// 시간 초기화 (1970년 1월 1일 기준 ~ 현재까지)
    time_t finish = time(NULL);// 시간 초기화

    int pass_int = 1;

    time(&start);// 시작시간이 start에 할당됨

    for (int i = 1; i < 100000; i++){
        for(int j = 1; j < 100000; j++)
            pass_int += 1;
    }
    
    cout << "pass_int : " << pass_int << endl;

    time(&finish);// 끝나는 시간이 finish에 할당됨

    cout << start << endl;
    cout << finish << endl;
    cout << "1을 100억번 더하는 시간 : " 
    << finish - start << "초" << endl;
    cout << "1을 100억번 더하는 시간 : " 
    << difftime(finish, start) << "초\n";// 현재시간 - 처음시간 = 초 단위

    return 0;
}
