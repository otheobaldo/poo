#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double pesoOnca;
    cout << "Digite o valor do peso do cereal em onça(oz): ";
    cin >> pesoOnca;

    double pesoTonelada = pesoOnca/35273.92;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2); 
    cout << "Valor em toneladas métricas: "<< pesoTonelada << " toneladas."<< endl
         << "Para conseguir 1 tonelada de cereal precisa-se de " << ceil(1/pesoTonelada) << " caixas\n";

    return 0;
}