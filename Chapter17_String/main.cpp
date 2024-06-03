#include<iostream>
#include<string>
#include<string.h>

using namespace std;

int main(){
    string my_country = "korea";
    string my_job = "developer";

    cout << "Country : " << my_country << endl;
    cout << "Job : " << my_job << endl;

    string my_info = my_country + ", " + my_job;            // c언어에서는 malloc, strcat, strcmp, strcpy를 사용하여 문자열을 가공했지만 c++에서는 + 로 붙이기가 가능하다.

    cout << "My Info : " << my_info << endl;
    cout << "true ? false ? : " 
    << (my_country + ", " + my_job == my_info) << endl;     // 1이면 true , 0이면 false - 결과는 1


    return 0;
}

