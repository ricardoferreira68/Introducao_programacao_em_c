/*
    Faça um programa em Linguagem C para ler duas notas e mostrar a maior entre elas.

    Entrada: Leia(Nota1)
             Leia(Nota2)
    Processamento: <--
                   Se Nota1 > Nota2 Então
                        Escreva(Nota1, "é maior")
                   Senão
                        Se Nota2 > Nota 1
                           Maior <-- Nota2
                        Senão
                           As notas são iguais
                    Para / Enquanto 
    Saída: Maior Nota
            Escreva(Maior)
    
    Início
        Declare Nota1, Nota2: Real
        Leia(Nota1)
        Leia(Nota2)
        Se Nota1 > Nota2 Então
            Escreva(Nota1, " é a maior.")
        Senão
            Se Nota2 > Nota1 Então
                Escreva(Nota2, " é a maior.")
            Senão
                Escreva("As notas são iguais.")
            Fim Se
        Fim Se
    Fim
*/
#include <iostream>
using namespace std;
int main(void)
{
    float Nota1, Nota2;
    cout << endl;
    cout << "Digite a 1a. Nota: ";
    cin >> Nota1;
    cout << "Digite a 2a. Nota: ";
    cin >> Nota2;
    cout << endl;
    if (Nota1 > Nota2)
        cout << Nota1 << " é a maior!" << endl << endl;
    else
        if (Nota2 > Nota1)
            cout << Nota2 << " é a maior!" << endl << endl;
        else
            cout << "As notas são iguais!" << endl << endl;
    return 0;
}
