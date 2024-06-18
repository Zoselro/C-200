#include<iostream>

using namespace std;

class Info{
public:
    Info(){
        data = new int;
        data_arr = new int[3];
        cout << "생성자 호출" << endl;
    }
    ~Info(){
        delete data;
        delete[] data_arr;
        cout << "메모리 해제(~Info)" << endl;
    }

    void dispose(){
        delete data;
        delete[] data_arr;
        cout << "메모리 해제(dispose)" << endl;
    }

private:
    int* data;
    int *data_arr;
};

int main(){
    Info *info = new Info();

    //info->dispose();
    delete info;
    
    return 0;
}