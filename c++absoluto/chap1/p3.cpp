#include <iostream>
using namespace std;

int main()
{
    const double aumento = 0.076;
    double salario;
    cout << "Insira o salário anual do empregado: ";
    cin >> salario;
    
    double retroativo = (salario/2)*aumento;

    cout << "Quantidade de pagamento retroativo devido: " << retroativo << endl
         << "Novo salário anual: " << retroativo*2 + salario << endl
         << "Novo salário mensal: " << (retroativo*2 + salario)/12 << endl;

    return 0;
}