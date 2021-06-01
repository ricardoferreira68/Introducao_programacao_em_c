/*
Faça um programa em Linguagem C para ler VÁRIAS notas e mostrar a maior entre elas.

1. Leia
2. <--    
3. Se
4. Para / Enquanto
5. Escreva

    Entrada: VÁRIAS notas
                Auxiliar <-- -100
                Leia(Nota)
                Enquanto(Nota <> -5)
                    Se Nota > Auxiliar Então
                        Auxilar <-- Nota
                    Fim Se
                    Leia(Nota)
                Fim Enquanto
                Escreva(Auxiliar)
    Processamento:
    Saída: Maior nota

*/
#include <iostream>
using namespace std;
int main(void)
{
    float Auxiliar, Nota;
    Auxiliar = -100;
    cout << "Digite a Nota (-5 p/Finalizar): ";
    cin >> Nota;
    while(Nota != -5)
    {
        if (Nota > Auxiliar)
            Auxiliar = Nota;
        cout << "Digite a Nota (-5 p/Finalizar): ";
        cin >> Nota;
    }
    cout << "A maior nota é " << Auxiliar<<endl;
    return 0;
}
