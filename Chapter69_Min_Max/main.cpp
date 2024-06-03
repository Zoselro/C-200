#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
                                                                //auto 키워드는 선언 지정자
                                                                //auto 키워드에서는 선언의 초기화 식에서 형식이 추론되는 변수를 선언.
                                                                //max는 수의 최대값 min은 수의 최소값을 구한다.
    auto result1 = min(1,5);
    auto result2 = max('a','z');
    cout << result1 << ", " << result2 << endl;

    auto result3 = minmax({ 'a', 'n', 'z'});
    auto result4 = minmax({ 1, 2, 3,123,212,111,1,99});
    
                                                                //minmax()에서는 first 는 최소값, second는 최대값 표시
    cout << result3.first << ", " << result3.second << endl;
    cout << result4.first << ", " << result4.second << endl;

    return 0;
}
