/*
Faça um programa para ler dois números e mostrar o maior entre eles.

Leia(num1)
Leia(num2)

Se num1 = num2 Então
    Escreva("Os números são iguais")
Fim Se

Se num1 > num2 Então
    Escreva("O maior é ", num1)
Fim Se

Se num1 < num2 Então
    Escreva("O maior é ", num2)
Fim Se

*/

#include <iostream>
using namespace std;
int main(void)
{
    int num1, num2;
    cout << "Digite o 1o. número: ";
    cin >> num1;
    cout << "Digite o 2o. número: ";
    cin >> num2;
    if (num1 == num2)
        cout << "Os números são iguais!" << endl;
    
    if (num1 > num2)
        cout << "O maior é " << num1 <<  endl;

    if (num1 < num2)
        cout << "O maior é " << num2 <<  endl;

    return 0;
}
