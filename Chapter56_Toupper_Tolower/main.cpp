// 복사할 문자열의 시작점, 복사할 문자열의 종료점, 복사될 문자열의 시작점(다른 문자열 변수에 대입할 수 있음),대문자로 변환하려면 toupper, 소문자로 변환하려면 tolower
#include<iostream>
#include<string>
#include<algorithm>


using namespace std;

int main(){
    string silla = "divided into the Three kingdoms.";
    string joseon = "Yi Seong-gyu, established Joseon in 1392";

    transform(silla.begin(), silla.end(), silla.begin(), ::toupper); 
    transform(joseon.begin(), joseon.end(), joseon.begin(), ::tolower);

    char lower_ch = 'g';
    char upper_ch = 'B';

    lower_ch = toupper(lower_ch);
    upper_ch = tolower(upper_ch);

    cout << "문자열 대문자로 변환 : " << silla << endl;
    cout << "문자열 소문자로 변환 : " << joseon << endl;
    cout << "문자 대 문자로 변환 : " << lower_ch << endl;
    cout << "문자 소 문자로 변환 : " << upper_ch << endl;


    silla = "divided into the Three kingdoms.";
    joseon = "Yi Seong-gyu, established Joseon in 1392";
    transform(silla.begin()+2, silla.end()-1, joseon.begin()+4, ::toupper);
    cout << joseon << endl;
    return 0;
}
    /*
    1) silla 문자열에서 세번째부터 끝에서 두번째 열까지 복사 vided into the Three kingdoms
    2) joseon 문자열 5번째 부터 29자 만큼의 문자열을 대체하여 vided into the Three kingdoms 29자 붙여넣기
    3) vided into the Three kingdoms을 toupper로 모두 대문자로 바꾸기
    3) 결과 :  Yi SVIDED INTO THE THREE KINGDOMSin 1392
    */