// Maior nota da turma.
#include <iostream>
using namespace std;
int main(void)
{
    float nota, maior=-10;
    cout << "Digite a nota (-1 p/ sair): ";
    cin >> nota;
    while(nota!=-1)
    {
        if (nota>maior)
            maior = nota;
        cout << "Digite a nota (-1 p/ sair): ";
        cin >> nota;
    }
    cout << "A maior nota foi " << maior <<endl;
    return 0;
}
