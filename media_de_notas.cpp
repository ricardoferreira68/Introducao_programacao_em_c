#include <iostream>
#define QTD 5
using namespace std;
int main(void)
{
	int i;
    float NOTA, SOMA, MEDIA;
	SOMA = 0;
	for(i = 1;i<=QTD;i++)
    { 
        cout << "Digite uma nota: ";
        cin >> NOTA;
		SOMA += NOTA; // SOMA = SOMA + NOTA;
	}
	MEDIA = SOMA / QTD;
	cout << "A média é " << MEDIA << endl;
    return 0;
}
