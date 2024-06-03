#include<iostream>
#include<string>

using namespace std;

int main(){
    string king = "조선 세종";
    string favorite1 = "고기";
    string favorite2 = "야근";

    string king_info = "";

    king_info += king;
    king_info += "은 ";
    king_info += favorite1;
    king_info.append("와 ");
    king_info.append(favorite2);
    king_info.append("을 좋아했습니다.");

    for (int i = 0, j = 12 ; i <= 10 && j >= 0 ; i++, j--){
        cout << "i : " << i << endl;
        cout << "j : " << j << endl;
    }

    cout << king_info << endl;
    return 0;
}