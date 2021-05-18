/*
Compreender o problema: Informar se o cliente se direito, ou não, a 20% de desconto no valor da corrida.
Entrada (Leia-São os dados para resolver o problema):
 distancia
 tempo
Processamento ("calcular" a informação de saída de acordo com as entredas):

Se distancia > 20 Então
    Escreva("Você tem direito a 20% de desconto")
Senão
    Se tempo > 40 Então
        Escreva("Você tem direito a 20% de desconto")
    Senão
       Escreva("Desculpe! A sua corrida não dá direito ao desconto.")
    Fim Se
Fim Se

Se distancia > 20 OU tempo > 40 Então
    Escreva("Você tem direito a 20% de desconto")
Senão
    Escreva("Desculpe! A sua corrida não dá direito ao desconto.")
Fim Se  

Saída(Escreva: mostrar a informação obitda a partir do processamento): 
Você tem direito a 20% de desconto.
Desculpe! A sua corrida não dá direito ao desconto.


*/

#include <iostream>
using namespace std;
int main(void)
{
    // Declaração das variáveis.
    float distancia, tempo;

    system("clear");
    cout << "===================================================" << endl;
    cout << "Serviço de transporte mobile" << endl;
    cout << "---------------------------------------------------" << endl;
    // Entrada:
    cout << "Digite a distância: ";
    cin >> distancia;
    cout << "Digite o tempo: ";
    cin >> tempo;

    // Processamento:
    cout << endl;
    cout << "---------------------------------------------------" << endl;
    if (distancia > 20 || tempo > 40) 
        cout << "Você tem direito a 20% de desconto" << endl;
    else
        cout << "Desculpe! A sua corrida não dá direito ao desconto." << endl;
    cout << "---------------------------------------------------" << endl;
    
    // Saída:

    return 0;
}











