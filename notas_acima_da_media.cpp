#include <iostream>
#define QTD 8
using namespace std;
int main(void)
{
	int i;
    float NOTA[QTD], SOMA, MEDIA;
	SOMA = 0;
	for(i = 0;i<QTD;i++)
    { 
        cout << "Digite uma nota: ";
        cin >> NOTA[i];
		SOMA += NOTA[i]; // SOMA = SOMA + NOTA;
	}
	MEDIA = SOMA / QTD;
    cout << "A média é " << MEDIA << endl;
	for(i=0;i<QTD;i++)
        if (NOTA[i]>MEDIA)
            cout << "nota: " << NOTA[i] << endl;
    return 0;
}
