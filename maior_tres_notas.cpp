/*
    Faça um programa em Linguagem C para ler 3.000 notas e mostrar a maior entre elas.

    Entrada: 
    Processamento: 
    Saída: 
    
    Início
    Fim
*/
#include <iostream>
using namespace std;
int main(void)
{
    float Nota1, Nota2, Nota3;
    cout << endl;
    cout << "Digite a 1a. Nota: ";
    cin >> Nota1;
    cout << "Digite a 2a. Nota: ";
    cin >> Nota2;
    cout << "Digite a 3a. Nota: ";
    cin >> Nota3;
    cout << endl;
    if (Nota1 > Nota2 && Nota1 > Nota3)
    {
        cout << Nota1 << " é a maior!" << endl << endl;
    }
    else
    { 
        if (Nota2 > Nota1 && Nota2 > Nota3)
        { 
            cout << Nota2 << " é a maior!" << endl << endl;
        }
        else
        {
            if (Nota3 > Nota1 && Nota3 > Nota2)
            {
                cout << Nota3 << " é a maior!" << endl << endl;
            }
            else
            { 
                cout << "Há notas iguais!" << endl << endl;
            }
        }
    }
    return 0;
}
