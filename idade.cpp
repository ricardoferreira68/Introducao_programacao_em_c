/*
Inicio
    Declare ano_nasc, ano_atual, idade: Inteiro
    Leia(ano_nasc)
    Leia(ano_atual)
    idade = ano_atual - ano_nasc
    Escreva(idade)
*/
#include <iostream>
using namespace std;
int main(void)
{
    int ano_nasc, ano_atual, idade;
    system("clear"); //windows system("cls");
    cout << "Digire o ano de nascimento: ";
    cin >> ano_nasc;
    cout << "Digite o ano atual: ";
    cin >> ano_atual;

    idade = ano_atual - ano_nasc;

    cout << "A idade é " << idade << " anos" << endl;

    return 0; 
}









