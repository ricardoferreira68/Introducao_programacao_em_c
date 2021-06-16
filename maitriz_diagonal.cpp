/*
Ler uma matriz 3x3 e mostrar a diagonal principal

M = | 7 8 9 |
    | 6 7 8 |
    | 5 6 7 |

M = | 00 01 02 |
    | 10 11 12 |
    | 20 21 22 |

Para i <-- 0 até 2 Faça
    Para j <-- 0 até 2 Faça
        Leia(M[i][j])
    Fim Para
Fim Para

Para i <-- 0 até 2 Faça
    Para j <-- 0 até 2 Faça
        Se i = j Faça
           Escreva(M[i][j])
        Fim Se
    Fim Para
Fim Para

*/
# include <iostream>
using namespace std;
int main(void)
{
    int i, j, M[3][3];
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
            cout << "Digite o elemento: ";
            cin >> M[i][j];
        }

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            if (i==j) 
                cout << M[i][j] << endl;
    return 0;
}







