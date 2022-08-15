#include <iostream>
using namespace std;

int main()
{
    double qntAdocanteMatarRato, pesoRato, pesoAmigo;
    qntAdocanteMatarRato = 0.00000002;
    pesoRato = 0.1;
    const double adocanteRefri = 0.001;
    cout << "Peso desejado: ";
    cin >> pesoAmigo;

    double qntAdocanteMatarAmigo = (qntAdocanteMatarRato*pesoAmigo)/pesoRato;
    cout << "Quantos kg de refrigerante ele pode tomar: " 
         << 100*qntAdocanteMatarAmigo/adocanteRefri << "kg\n";

    return 0;



}