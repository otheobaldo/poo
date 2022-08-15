#include <iostream>
#include <cmath>
using namespace std;
void produto(int n1, int n2, int n3);

int main()
{
    int n1, n2, n3;
    cout << "Forneça três números positivos para \n"
         << "realizar uma multiplicação: ";
    cin >> n1 >> n2 >> n3;
    produto(n1,n2,n3);  
    return 0;
}

void produto(int n1, int n2, int n3)
{
    cout << "O produto dos números é: "
         << n1*n2*n3 << endl;
}
