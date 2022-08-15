#include <iostream>
using namespace std;

int main()
{
    const double horaRegular = 16.78, taxa = 1.5, previdencia = 0.14, impostoRenda = 0.06, impostoEstadual = 0.05;
    const int sindicato = 10, adicional = 35;

    double horasTrabalhadas, salarioBruto;
    int nDependentes;
    
    cout << "Número de horas trabalhadas em uma semana: ";
    cin >> horasTrabalhadas;
    cout << "Número de dependentes: ";
    cin >> nDependentes;

    if (horasTrabalhadas > 40)
        salarioBruto = (40*horaRegular) + (horasTrabalhadas-40)*horaRegular*taxa;
    else
        salarioBruto = horasTrabalhadas*horaRegular;
    
    double valorPrevidencia, valorImpostoRenda, valorImpostoEstado;
    valorPrevidencia = salarioBruto*previdencia;
    valorImpostoEstado = salarioBruto*impostoEstadual;
    valorImpostoRenda = salarioBruto*impostoRenda;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "Salário Bruto: R$" << salarioBruto << endl
         << "Previdência: R$" << valorPrevidencia << endl
         << "Imposto de Renda Federal: R$" << valorImpostoRenda << endl
         << "Imposto Estadual: R$" << valorImpostoEstado << endl
         << "Salário Líquido: R$" 
         << salarioBruto - valorImpostoEstado - valorImpostoRenda - valorPrevidencia - sindicato + adicional*nDependentes
         << endl;
    return 0;
}