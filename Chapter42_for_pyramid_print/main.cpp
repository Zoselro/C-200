#include<iostream>

using namespace std;

int main(){

    for (int i = 1, j = 0; i <= 4; i++, j = 0){
        for(int k = 1; k <= 4 - i; k++)
            cout << " ";

            while (j != 2 * i - 1)
            {
                cout << "* ";
                j++;
            }

            cout << endl;
    }

    return 0;
}
/*
k 반복문은 offset - i 만큼의 공백을 출력하는 반복문
j 반복문은 " *" 를 찍는 반복문인데, 수식의 값과 동일하지 
않을 때 까지 반복을 하고 j++;

k반복문이 끝났다는 의미는 " *" 을 다 찍었다는 의미로
줄 바꿈

이 반복을 4번 반복
*/