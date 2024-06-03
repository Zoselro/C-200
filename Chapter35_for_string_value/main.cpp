#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "The Jin sate was formed in southern Korea by the 3rd century BC";

    char find = 'a';

    int size = str.size();
    int cnt = 0;

    for(int i = 0 ; i < size ; i++){
        if(str[i] == find)
            cnt ++;
    }

    cout << "문자의 a 개수는 " << cnt << "개 입니다." << endl;

    return 0;
}
