#include <iostream>
using namespace std;

int main()
{
    int  a, b;
    unsigned int inteira, resto;

    cout << "Insira dois números não negativos: ";
    cin >> a >> b;

    inteira = a/b;
    resto = a%b;
    
    cout << "Parte inteira: " << inteira << endl
         << "Resto: " << resto << endl;

    return 0;
}