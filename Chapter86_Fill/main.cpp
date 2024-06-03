#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int data1[10] = { 0, };
    fill(data1, data1 + 3, 10);// 수정할 시작 위치 , 끝위치, 값 - 10, 10, 10, 0, 20, 20, 20, 20, 0, 0
    fill(data1 + 4, data1 + 8 , 20);

    cout << "== data1 결과 ==" << endl;

    for (int i = 0; i < 10; i++){
        cout << data1[i];
        if(i != 9)
            cout << ", ";
    }
        cout << endl;

        vector<int> data2({ 0, 1, 2, 3, 4, 5, 6, 7});
        
        fill(data2.begin(), data2.begin() + 3 , 30); // 30, 30, 30 , 3, 4, 5, 6, 7

        cout << endl << endl << "== data2 결과 ==" << endl;

        for (int i = 0, size = data2.size(); i < size; i++){
            cout << data2.at(i);
                if(i != size - 1)
                    cout << ", ";
        }

    return 0;
}