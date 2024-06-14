#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*int main(){
    int data1[10] = { 0, };
    fill_n(data1, 2, 25);                                                   // 수정할 시작 위치 , 개수, 값-> 10 10 0 0 0 0 0 0 0 0 0 0
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
}*/
int main(){
	int data1[10] = { 0, }; // 모든 값 0으로 초기 세팅

	fill(data1, data1 + 3, 10); // 첫 인자로는 수정할 위치, 두 번째 인자는 끝 위치, 세 번째 인자는 세팅 할 값
					// 10, 10, 10, 0, 0, 0, 0, 0, 0, 0
	fill(data1 + 4, data1 + 8 , 20); // 다섯 번째 부터 여덟 번째까지 데이터값을 20으로 변경
					// 10, 10, 10, 0, 20, 20, 20, 20, 0, 0


	fill_n(data1, 2, 25); // 첫 인자로는 수정 시작 할 위치, 두 번째 인자는 개수, 세 번째 인자로는 세팅할 값
				// 25, 25, 10, 0, 20, 20, 20, 20, 0, 0
	fill_n(data1 + 4, 3, 30); // 다섯 번째부터 일곱 번째 까지의 데이터를 30으로 변경
				// 25, 25, 10, 0 , 30, 30, 30, 20, 0, 0
	// -> fill이랑 fill_n은 비슷하지만 두 번째 인자로 들어오는게 fill은 끝낼 위치가 들어오고, fill_n은 수정 시작 할 	//	위치부터 몇 개를 수정 할지에 대한 인자가 들어오게 된다.

   cout << "== data1 결과 ==" << endl;

    for (int i = 0; i < 10; i++){
        cout << data1[i];
        if(i != 9)
            cout << ", ";
    }

	return 0;
}
