#include <iostream>
using namespace std;
int main(void)
{
    int numero;
    cout << "Digite um número inteiro, por favor: ";
    cin >> numero;
    if (numero > 0)
    {
        cout << "O número é positivo!" << endl;
    }
    else
    {
        if (numero < 0)
        {
            cout << "O número é negativo!" << endl;
        }
        else
        {
            cout << "O número é zero!" << endl;
        }
    }
    return 0;
}
