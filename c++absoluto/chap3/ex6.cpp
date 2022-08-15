#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int seed;
    cout << "Forneça um número negativo para usar\n"
         << "como semente de gerador de números: ";
    cin >> seed;
    srand(seed);

    cout << "10 propabilidades aleátorias:\n";
    for(int i = 0; i <= 10; i++)
    {
        cout << ((RAND_MAX - rand())/static_cast<double>(RAND_MAX)) << endl;
    }

    return 0;
}