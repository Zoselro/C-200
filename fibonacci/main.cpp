#include<iostream>

using namespace std;

int one = 0;
int zero = 0;

int fibonacci(int n) {

    if (n == 0) {
        zero++;
        return 0;
    } else if (n == 1) {
        one++;
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main()
{
    int N = 0;

    cin >> N;
    
    if(N <= 40)
    {
        return;
    }

    fibonacci(N);
    cout << zero << " " << one << endl;

    cin >> N;
    zero = 0;
    one = 0;

    fibonacci(N);
    cout << zero << " " << one << endl;
    return 0;
}