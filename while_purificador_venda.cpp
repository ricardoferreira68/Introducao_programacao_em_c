#include <iostream>
using namespace std;
int main() 
{
	float Receber, Valor_entrada;
	Receber = 0;
	cout << "Digite o valor da venda: ";
	cin >> Valor_entrada;
	while (Valor_entrada != 0)
	{
		Receber = Receber + Valor_entrada * 50 / 100;
		cout << "Digite o valor da venda: ";
		cin >> Valor_entrada;
	}
    cout << "Valor a receber: " << Receber << "\n";
}
