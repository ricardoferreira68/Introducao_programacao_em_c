// Verificar se o aluno pode, ou não, fazer a nova prova (nota < média da turma).
#include <iostream>
using namespace std;
int main(void)
{
    int qtde, numero;
    float soma, media, nota[50]; 
    qtde = 0;
    soma = 0;
    cout << "Digite a nota: ";
    cin >> nota[qtde];
    while (nota[qtde] != -1)
    {
        soma = soma + nota[qtde];
        qtde = qtde + 1;
        cout << "Digite a nota: ";
        cin >> nota[qtde];
    }
    media = soma / qtde;
    cout << "Digite o número: ";
    cin >> numero;
    if (nota[numero] < media)
        cout << "Pode fazer a nova prova!" << endl;
    return 0;
}
