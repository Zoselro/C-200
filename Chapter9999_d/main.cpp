#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>

using namespace std;

enum days{
    sun, sat, fri, thu, wed, tues, mon
};


int main(){

    stringstream ss;
    double num = 0.0;
    string str = "123 1@74  1515!878";

    ss.str(str);
    while ( ss >> num ){
        cout << "num : " << num << endl;
    }


    int n1 = 10;
    int n2 = 20;
    int n3 = 30;

    int *p[3] = {&n1, &n2, &n3};

    cout << "*p[0] : " << *p[0] << endl;
    cout << "*p[0+1] : " << *p[0+1] << endl;
    
    cout << "*p+1 : " << *p+1 << endl; // *p 는 p[0] 을 의미하며, &n1 이다. 따라서 &n1 + sizeof(int) 이 출력
    cout << "&n1 + 1 " << &n1 + 1 << endl;

    cout << "*(p+1) : " << *(p+1) << endl; // p의 첫 번째 요소에서 sizeof(int*) 만큼 증가한 주소이다. 따라서 p[1] 이고, 이는 &n2 이다.
    cout << "&n2 : " << &n2 << endl;
    cout << "p[1] : " << p[1] << endl;

    cout << "p+1 : " << p+1 << endl; // p + 1은 포인터 배열의 첫 번째 요소 주소에서 sizeof(int*)만큼 증가한 주소를 의미한다. 따라서 p[1]의 주소를 출력한다.


    char temp[3] = {'a', 'b', 'c'};
    char temp2[4] = {'a', 'b', 'c', 'd'};

    char (*array)[3];
    array = &temp;
    // array = &temp2; error

    for (int i = 0 ; i < sizeof(*array) ; i++){
        cout << "array List : " << (*array)[i] << endl;
    }

    int temp3[3][2] = {{1,2},{3,4},{5,6}};
    int (*array2)[3][2];

    array2 = &temp3;
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 2 ; j++)
            cout << "array2 List : " << (*array2)[i][j] << endl;
    }

    //array = &temp2; error: cannot convert 'char (*)[4]' to 'char (*)[3]' in assignment

    enum days today;
    today = fri;
    char * days_name[] = {"sun","sat","fri","thu","wed","tues","mon"};
    printf("%d\n", today);
    printf("%s\n,",days_name[today]);

    int data[2][3] = { {0, 1, 2},{999,7777} };

    for(int i = 0 ; i < 1 ; i++){
        for(int j = 0 ; j < sizeof(data) / sizeof(int) ; j++)
            cout << "data[" << i << "][" << j << "] : " << data[i][j] << endl;
    }

    cout << "**data : " << **data << endl;
    cout << "*data : " << *data << endl;
    cout << "data : " << data << endl;

    vector<vector<int>> data2 = {{1,2,3},{5,7},{999,888,777}};

    return 0;
}