#include<iostream>
#include<cmath>
using namespace std;

double modf_(double, double*);

int main(){
    double x = 1.2345;
    double div = 0.0;
    double mod = 0.0;

    mod = modf(x,&div);
    cout << "1.2345의 몫 : " << div << ", 나머지 : " << mod << endl;

    div = 0.0;
    mod = 0.0;

    mod = modf_(x, &div);
    cout << "1.2345의 몫 : " << div << ", 나머지 : " << mod << endl;

    return 0;
}

double modf_(double x, double* p){ // p는 div(몫) 값
    double tmp = x - static_cast<int>(x);
    *p = x - tmp;
    return tmp;
}
