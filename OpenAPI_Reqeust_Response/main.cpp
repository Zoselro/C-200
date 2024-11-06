#include<iostream>
#include<stdlib.h>
#include<ctime>

using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(NULL)));
    int random1 = 0;
    int random2 = 0;
    random2 = rand();
    for(int i = 0 ; i < 10000 ; i++)
    {
        random1 = rand();
        if(random1 <= 10000 && random2 <= 10000)
        {   
            if(random2 == random1)
            {
                cout << random1 << " " << random2 << endl;
            }
        }
    }



    return 0;
}