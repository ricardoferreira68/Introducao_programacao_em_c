#include <iostream>
using namespace std;
int main() {
  int Maior, i, Pontuacao;
  Maior = -1;
  for (i=1; i<=4; i++)
  {
     cout << "Digite a pontuação: ";
     cin >> Pontuacao;
     if (Pontuacao > Maior)
        Maior = Pontuacao;
  }
  cout << "Maior pontuação: " << Maior;
}
