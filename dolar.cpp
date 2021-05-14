/*
    Início
        Declare VAL_DOLAR, COTACAO, VAL_REAL: Real
        Leia(VAL_DOLAR)
        Leia(COTACAO)
        VAL_REAL <-- VAL_DOLAR * COTACAO
        Escreva(VAL_REAL)
    Fim
*/
#include <iostream>
using namespace std;
int main(void)
{
    float VAL_DOLAR, COTACAO, VAL_REAL;
    system("clear");
    cout << "Digite o valor em dólar: ";
    cin >> VAL_DOLAR;
    cout << "Digite o valor da cotação do dólar: ";
    cin >> COTACAO;

    VAL_REAL = VAL_DOLAR * COTACAO;

    cout << "O valor em real é R$" << VAL_REAL << endl << endl;
    
    return 0; 
}









