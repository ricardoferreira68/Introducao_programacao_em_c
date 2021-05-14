// Programa para multiplicar 2 números
#include <iostream>
using namespace std;
int main(void)
{
    const int TAM = 60;
    char Nome[TAM];
    char Endereco[40];
    int Idade;
    char Sexo;
    float Mensalidade;
    system("clear");
    cout << "Digite o Nome: ";
    cin.getline(Nome, TAM);
    cout << "Digite o Endereço: ";
    cin.getline(Endereco, 40);
    cout << "Digite a Idade: ";
    cin >> Idade;
    cout << "Digite o Sexo: ";
    cin >> Sexo;
    cout << "Digite o Valor da Mensalidade: ";
    cin >> Mensalidade;

    cout << endl;
    cout << "=====================================================" << endl;
    cout << " FACULDADE ESTÁCIO DE BELÉM" << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Aluno(a)...: " << Nome << endl;
    cout << "Endereço...: " << Endereco << endl;
    cout << "Idade......: " << Idade << endl;
    cout << "Sexo.......: " << ((Sexo == 'M') ? ("Masculino") : ("Femenino")) << endl;
    cout << "Mensalidade: R$" << Mensalidade << endl;
    cout << "=====================================================" << endl;    
    return 0;
}
