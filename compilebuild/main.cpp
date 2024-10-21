#include <iostream>
#include <string>
#define aaaa

using namespace std;  // std:: 생략을 위해

// 구조체 선언
struct account {
    string owner;
    int balance;
};

// 구조체 포인터를 반환하는 함수
account* NewAccount(string owner) {
    // 동적 메모리 할당
    account* newAccount = new account;
    
    // 멤버 초기화
    newAccount->owner = owner;
    newAccount->balance = 200;

    // 구조체 포인터 반환
    return newAccount;
}

enum abcd{
    a = 0,
    b,c,d,e,f,g,h
};

int main() {

    abcd abc;
    int j = 10;
    int p = 0x01;
    p &= ~ j;
    cout << abc << endl;
    // NewAccount 함수를 통해 구조체 생성
    account* myAccount = NewAccount("Alice");
    uint8_t a = 1U;
    // 구조체 멤버 출력
    cout << "Owner: " << myAccount->owner << endl;
    cout << "Balance: " << myAccount->balance << endl;
    cout << "a : " << a << endl;
    cout << p << endl;
    // 동적으로 할당한 메모리 해제
    delete myAccount;

    #ifdef aaaa
    cout << "aaaa print" << endl;
    #endif

    #ifdef aaaab
    cout << "not aaaab print" << endl;
    #endif

    #ifndef abcde
    cout << "not abcde print" << endl;
    #endif
    return 0;
}