#include <iostream>
using namespace std;
int main(void)
{
    int i, numero[10];
    system("clear");
	for(i=0;i<10;i++)
    {
        cout << "Digite o "<<i+1<<"o número: ";
        cin >> numero[i];
    }
    cout << endl;
    cout << "Relação dos números na ordem inversa"<<endl;
    cout << "-----------------------------------"<<endl;
	for(i=9;i>=0;i--)
    {
		cout << numero[i] << endl;
	}
    cout << "-----------------------------------"<<endl;
    return 0;
} 
