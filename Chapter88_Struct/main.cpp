#include<iostream>
#include<string>

using namespace std;

struct Princess
{
    string name;
    string father;
    string birthday = "알 수 없음";
}Goryeo[2];

int main(){
    Princess jungmyung;
    jungmyung.name = "청명공주";
    jungmyung.father = "조선 선조";
    jungmyung.birthday = "1603 / 06 / 27";

    Goryeo[0].name = "선정왕후";
    Goryeo[0].father = "고려 성종";
    Goryeo[1].name = "효정공주";
    Goryeo[1].father = "고려 현종";

    cout << " == 조선 공주 == " << endl;
    cout << jungmyung.name << endl;
    cout << jungmyung.father << endl;
    cout << jungmyung.birthday << endl;

    cout << " == 고려 공주 == " << endl;

    int size_G = sizeof(Goryeo) / ( sizeof(string) * 3 );

    cout << size_G << endl;
    
    for(int i = 0 ; i < size_G ; i++){
        cout << Goryeo[i].name << endl;
        cout << Goryeo[i].father << endl;
        cout << Goryeo[i].birthday << endl;
    }


    return 0;
}