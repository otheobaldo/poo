#include <iostream>
using namespace std;

int main()
{
    //a
    int i = 1;
    while (i <= 10)
    {
        if (i< 5 && i != 2)
            cout << 'X';
        i++;
    }

    for (int i = 1; i <= 10; i++)
    {
        if (i < 5 && i != 2)
            cout << 'X';
    }

    //b
    int i = 1;
    while (i <= 10)
    {
        cout << 'X';
        i = i + 3;
    }

    for(int i = 1; i <= 10; i = i + 3)
    {
        cout << 'X';
    }

    //c
    long n = 100;
    do
    {
        cout << 'X';
        n = n + 100;
    } while (n < 1000);

    cout << 'X';
    for(long n = 200; n < 1000; n = n +100)
    {
        cout << 'X';
    }
    

    return 0;
}