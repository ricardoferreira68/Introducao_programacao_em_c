/*
Ler uma matriz 2x3 e um escalar
Mostrar a multiplicação entre eles
M = | 4 6 8 |
    | 7 9 5 |
E = 5
R = | 20 30 40 |
    | 35 45 25 |

Para i <-- 0 até 1 Faça
    Para j <-- 0 até 2 Faça
        Leia(M[i][j])
    Fim Para
Fim Para

Leia (E)

Para i <-- 0 até 1 Faça
    Para j <-- 0 até 2 Faça
        Escreva(M[i][j] * E)
    Fim Para
Fim Para

*/
#include <iostream>
using namespace std;
int main(void)
{
    int i, j, E, M[2][3];
    for(i=0;i<2;i++)
        for(j=0;j<3;j++)
        {
            cout << "Digite o elemento: ";
            cin >> M[i][j];
        }
    cout << "Digite o Escalar: ";
    cin >> E;
    for(i=0;i<2;i++)
        for(j=0;j<3;j++)
            cout << M[i][j] * E << endl;
    return 0;
}
