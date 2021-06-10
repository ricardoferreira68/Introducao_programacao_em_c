/*
Ler duas matrizes 2x2 (A e B)
Calcular a matriz C = A + B
Mostrar a matriz C

Algoritmo Soma_Matrizes
Início
    Declare i, j, A[2][2], B[2][2], C[2][2];
    Para i <--0 até 1 Faça
        Para j <-- 0 até 1 Faça
            Leia(A[i][j])
        Fim Para
    Fim Para

    Para i <--0 até 1 Faça
        Para j <-- 0 até 1 Faça
            Leia(B[i][j])
        Fim Para
    Fim Para

    Para i <--0 até 1 Faça
        Para j <-- 0 até 1 Faça
            C[i][j] <-- A[i][j] + B[i][j]
        Fim Para
    Fim Para

    Para i <--0 até 1 Faça
        Para j <-- 0 até 1 Faça
            Escreva(C[i][j])
        Fim Para
    Fim Para

Fim
*/
#include <iostream>
using namespace std;
int main(void)
{
    int i, j, A[2][2], B[2][2], C[2][2];

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        {
            cout << "Digite o elemento: ";
            cin >> A[i][j];
        }

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        {
            cout << "Digite o elemento: ";
            cin >> B[i][j];
        }

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            C[i][j] = A[i][j] + B[i][j];

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            cout << C[i][j] << endl;

    return 0;
}