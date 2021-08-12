#include <iostream>
using namespace std;
int main(void)
{
	int i, numero, MENOR;
	MENOR = 1000;
	for (i=1;i<=5;i++)
    { 
		cout << "Digite um número: ";
        cin >> numero;
		if (numero < MENOR)
			MENOR = numero;
	}
	cout << "o menor número é " << MENOR<<endl;
    return 0;
}
