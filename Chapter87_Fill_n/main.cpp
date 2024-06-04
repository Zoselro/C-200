#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int data1[10] = { 0, };
    fill_n(data1, 2, 10);                                               // 수정할 시작 위치 , 개수, 값-> 10 10 0 0 0 0 0 0 0 0 0 0
    fill_n(data1 + 4, 3 , 20);                                              // 10 10 0 0 20 20 20 0 0 0

    cout << "== data1 결과 ==" << endl;

    for (int i = 0; i < 10; i++){
        cout << data1[i];
        if(i != 9)
            cout << ", ";
    }
        cout << endl;

        vector<int> data2({ 0, 1, 2, 3, 4, 5, 6, 7});
        
        fill_n(data2.begin(), data2.size() - 1 , 30);                                               // 30 30 30 30 30 30 30 7
        
        cout << endl << endl << "== data2 결과 ==" << endl;

        for (int i = 0, size = data2.size(); i < size; i++){
            cout << data2.at(i);
                if(i != size - 1)
                    cout << ", ";
        }

    return 0;
}