#include <iostream>
using namespace std;
int main(void)
{
	int i, numero, MAIOR;
	MAIOR = 0;
	for (i=1;i<=5;i++)
    { 
		cout << "Digite um número: ";
        cin >> numero;
		if (numero > MAIOR)
			MAIOR = numero;
	}
	cout << "o MAIOR número é " << MAIOR<<endl;
    return 0;
}
