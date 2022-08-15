#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cout << "Digite x, y e z: ";
    cin >> x
        >> y
        >> z;

    int multi = (3 * x);
    double soma = multi + y;
    double x_y, divisao, divisao2;
    x_y = x + y;
    divisao = x_y/7;
    divisao2 = (soma / (z+2));

    cout << "3x: " << multi << endl
         << "3x + y: " << soma << endl
         << "(x + y)/7: " << divisao << endl
         << "(3x + y)/(z + 2): " << divisao2 << endl;

    return 0;
}