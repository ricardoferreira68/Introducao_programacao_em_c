/*
Faça um programa em Linguagem C para ler 5 números e mostrar os números lidos na ordem iversar
Entrada: 5 6 3 2 10
Processamento: 
Início
    Declare i, Num[5]: Inteiro
    Para i <- 1 até 5 Faça
        Leia(Num[i])
    Fim Para
    Para i <-- 5 até 1 Faça
        Escreva(Num[i])
    Fim Para
Fim
Saida: 10 2 3 6 5
*/
#include <iostream>
using namespace std;
int main(void)
{
    int i, Num[5];
    for (i=0; i<5; i++)
    {
        cout << "Digite "<<i+1<<"o. um número: ";
        cin >> Num[i];
    }
    for (i=4;i>=0;i--)
        cout << i+1 << "o. " << Num[i] << endl;
    return 0;
}
