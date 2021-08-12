
/*
Dadas as matrizes A, B e C, determine a matriz D resultante da operação A + B – C.
ENTRADA: Leia(A, B e C)
PROCESSAMENTO D = A+B-C
SAÍDA: Mostrar a matriz D

Constante LIN = 3, COL = 3

Para i <-- 0 até LIN Faça
    Para j <-- 0 até COL Faça
        Leia(A[i][j])
    Fim Para
Fim Para

Para i <-- 0 até LIN Faça
    Para j <-- 0 até COL Faça
        Leia(B[i][j])
    Fim Para
Fim Para

Para i <-- 0 até LIN Faça
    Para j <-- 0 até COL Faça
        Leia(C[i][j])
    Fim Para
Fim Para

Para i <-- 0 até LIN Faça
    Para j <-- 0 até COL Faça
        D[i][j] <-- A[i][j]+B[i][j]-C[i][j]
    Fim Para
Fim Para

Para i <-- 0 até LIN Faça
    Para j <-- 0 até COL Faça
        Escreva(D[i][j])
    Fim Para
Fim Para

*/

#include <iostream>
#define LIN 3
#define COL 3
using namespace std;
int main(void)
{
    int i, j, A[LIN][COL], B[LIN][COL], C[LIN][COL], D[LIN][COL];
    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            cout << "Digite o elemento A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
        
    }

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            cout << "Digite o elemento B[" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }
        
    }

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            cout << "Digite o elemento C[" << i << "][" << j << "]: ";
            cin >> C[i][j];
        }
        
    }

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            D[i][j] = A[i][j]+B[i][j]-C[i][j];
        }
        
    }

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            cout << "D["<<i<<"]["<<j<<"]="<<D[i][j]<<endl;
        }
        
    }
    return 0;
}
