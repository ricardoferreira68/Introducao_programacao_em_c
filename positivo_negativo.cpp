/*
Faça um progama para ler um número e dizer se ele é positivo, negativo ou zero.

Leia(numero)
Se numero > 0 Então
    Escreva("o número é positivo")
senão
    Se numero < 0 Então
        Escreva("O número é negativo")
    Senão
        Escreva("O número é zero")
    Fim
Fim

*/

#include <iostream>
using namespace std;
int main(void)
{
    int numero;
    cout << "Digite o número: ";
    cin >> numero;
    if (numero > 0)
        cout << "O número é positivo!" << endl; 
    else
        if (numero < 0)
            cout << "O número é negativo!" << endl;
        else
            cout << "O número é zero!" <<  endl;
    return 0;
}