// Maior pontuação no torneio de Cricket.
#include <iostream>
using namespace std;
int main(void)
{
    int Maior, i, Pontuacao;
    Maior = -1;
    for(i=1;i<=4;i++)
    {
        system("clear");
        cout << "=======================" <<endl;
        cout << " Prefeitura de Tomé-Açu" <<endl;
        cout << " Secult - FEC"<<endl;
        cout << " Torneio de Verão"<<endl;
        cout << " CRICKET"<< endl;
        cout << "-----------------------" <<endl;
        cout << "Digite a "<<i<<"a. pontuação: ";
        cin >> Pontuacao;
        if (Pontuacao>Maior)
            Maior = Pontuacao;
    }
    cout << "Maior pontuação: " << Maior <<endl<<endl;
    return 0;
}