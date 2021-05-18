/* Faça um programa em linguagem C para ler um número e dizer se ele é par ou ímpar.
Entrada: numero
Processamento: 
Se resto(numero / 2) = 0 Então
    Escreva("Par")
Senão 
    Escreva("Ímpar")
Fim Se
Saída: Par ou Ímpar

*/

#include <iostream>
using namespace std;
int main(void)
{
    int numero;
    cout << "Digite o número: ";
    cin >> numero;
    if (numero%2 == 0)
        cout << "O número é Par!" << endl; 
    else
        cout << "O número é Ímpar" <<  endl;
    return 0;
}
