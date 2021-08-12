#include <iostream> 
using namespace std;
int main(void)
{
    char opcao;
    do
    {
        cout << "1- Iniciar " << endl;
        cout << "2- Vidas   " << endl;
        cout << "3- Foguetes" << endl;
        cout << "4- Nivel   " << endl;
        cout << "0- Sair    " << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;
    } while(opcao != '0');
    return 0;
}
