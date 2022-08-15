#include <iostream>
using namespace std;

int main()
{
    int n = -1;
    if (n < 0)
        cout << "Abaixo de zero";
    else if (n > 100)
        cout << "Acima de cem";
    else
        cout << "Entre zero e cem";
    cout << endl;
    return 0;
}