/*
Ler um vetor com 10 números e multiplicar pelo escalar 4.
Entrada: meu_vetor = {4, 5, 2, 7, 8, 1, 6, 9, 3, 2, }
Saída: Resultado = meu_vetor x 4
       meu_vetor = {16, 20, 8, 28, 32, 4, 24, 36, 12, 8, }
Processamento: Para i <-- 1 até 10 Faça
                 Escreve(meu_vetor[i] * 4)
               Fim Para
--------------------------------------
Algoritmo Vetor_x_4
Início
    Declare i, meu_vetor: Inteiro
    Para i <-- 0 até 9 Faça
        Leia(meu_vetor[i])
    Fim Para
    Para i <-- 0 até 9 Faça
        Escreva(meu_vetor[i] * 4)
    Fim Para
Fim
---------------------------------------
*/
#include <iostream>
using namespace std;
int main(void)
{
    int i, meu_vetor[10];
    for(i=0;i<10;i++)
    {
        cout << "Digite o valor do elemento: ";
        cin >> meu_vetor[i];
    }
    for(i=0;i<10;i++)
        cout << meu_vetor[i] * 4 << endl;
    return 0;
}
