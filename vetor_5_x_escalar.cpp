/*
Ler um vetor[5] e um escalar.
Mostrar o vetor divido pelo escalar.
Vetor = {20, 15, 40, 30, 35}
Escalar = 5
Resultado = {4, 3, 8, 6, 7}
---------------------------------------------
Algoritmo vetor_dividido_por_escalar
Início
    Declare i, vetor, Escalar, Resultado: Inteiro
    Para i <-- 0 até 4 Faça
      Leia(vetor[i])
    Fim Para
    Leia(Escalar)
    Para i <-- 0 até 4 Faça
        Resultado[i] <-- vetor[i] / Escalar
    Fim Para
    Para i <-- 0 até 4 Faça
       Escreva(Resultado[i])
    Fim Para
Fim
*/
#include <iostream>
using namespace std;
int main(void)
{
    int i, Escalar, Vetor[5], Resultado[5];
    for(i=0;i<5;i++)
    {
        cout << "Digite o elemento: ";
        cin >> Vetor[i];
    }
    cout << "Digite o Escalar: ";
    cin >> Escalar;
    for(i=0; i<5;i++)
        Resultado[i] = Vetor[i] / Escalar;
    for(i=0;i<5;i++)
        cout << Resultado[i] << endl;
    return 0;
}