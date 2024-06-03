#include<iostream>
#include<bitset> 

using namespace std;

int main(){
    bitset<8> bit1;                                                         // 크기가 8 짜리 비트 정의
    bit1.reset();                                                           // 0000 0000 으로 초기화
    bit1 = 127;                                                             // 0111 1111

    bitset<8> bit2;
    bit2.reset();                                                           
    bit2 = 0x20; // 32 -> 0010 0000

    bitset<8> bit3 = bit1 & bit2;                                           // bit1과 bit2의 비트가 둘 다 같으면 1 다르면 0
    bitset<8> bit4 = bit1 | bit2;                                           // bit1과 bit2의 비트중 하나라도 1이면 1 둘 다 0이면 0
    bitset<8> bit5 = bit1 ^ bit2;                                           // XOR이며, 대응되는 비트가 서로 다르면 1
    bitset<8> bit6 = ~bit1;                                                 // 비트가 1이면 0, 0이면 1로 반전시켜 반환
    bitset<8> bit7 = bit2 << 1;                                             // 왼쪽으로 1번 쉬프트
    bitset<8> bit8 = bit2 >> 1;                                             // 오른쪽으로 1번 쉬프트

    cout << "bit1 & bit2 : " << bit3 << ", " << bit3.to_ulong() << endl;
    cout << "bit1 | bit2 : " << bit4 << ", " << bit4.to_ulong() << endl;
    cout << "bit1 ^ bit2 : " << bit5 << ", " << bit5.to_ulong() << endl;
    cout << "~bit1 : " << bit6 << ", " << bit6.to_ulong() << endl;
    cout << "bit2 << 1 : " << bit7 << ", " << bit7.to_ulong() << endl;
    cout << "bit2 >> 1 : " << bit8 << ", " << bit8.to_ulong() << endl;

    return 0;
}