#include<iostream>
#include<random>
#include<ctime>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    string str1 = "1a2b3c4d5e6f7g8h9i";
    string str2 = "republic of korea";
    int data1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

// 난수의 씨앗을 심는 과정, 현재시간을 기준으로 하는이유는 같은수 예를들어 srand(999); 를 하게되면 랜덤한 숫자가 동일한 숫자로 반복되어 나온다.
    srand(static_cast<unsigned int>(time(NULL))); 
    
    random_shuffle(str1.begin(), str1.end()); // 처음부터 끝까지의 문자열을 랜덤으로 섞기
    random_shuffle(str2.begin(), str2.end()); 
    random_shuffle(data1, data1 + 4); // 인덱스 0부터 인덱스 3번까지의 int형의 배열을 무작위로 섞기

    cout << "== str1 == " << endl;
    //auto 키워드에서는 선언의 초기화 식에서 형식이 추론되는 변수를 선언.
    //auto 키워드는 선언 지정자
    for (auto i : str1)
        cout << i << ", ";

    cout << endl << "== str2 == " << endl;
    for (auto i : str2)
        cout << i << ", ";

    cout << endl << "== data1 == " << endl;
    for (auto i : data1)
        cout << i << ", ";

    return 0;
}

