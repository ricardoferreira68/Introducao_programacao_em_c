#include <iostream> 
using namespace std;
int main(void)
{
    char opcao;
    int vidas, foguetes, nivel;
    foguetes = 5;
    vidas = 10;
    nivel = 1;
    do
    {
        system("clear");
        cout << " =========================================" << endl;
        cout << "  SPACE INVADER    -    PLAY STATION 2021 " << endl;
        cout << "                                          " << endl;
        cout << "              1- Iniciar " << endl;
        cout << "              2- Vidas (" << vidas << ")" << endl;
        cout << "              3- Foguetes (" << foguetes << ")" << endl;
        cout << "              4- Nivel (" << nivel << ")" << endl;
        cout << "              0- Sair " << endl;
        cout << " -----------------------------------------" << endl;
        cout << "         Escolha uma opção: ";
        cin >> opcao;
        switch (opcao)
        {
            case '1':
                cout << "Aqui deve ficar a lógica do jogo." << endl;
                break;
            case '2':
                cout << "Digite a quantidade de vidas: ";
                cin >> vidas;
                break;
            case '3':
                cout << "Digite a quantidade de foguetes: ";
                cin >> foguetes;
                break;
            case '4':
                cout << "Digite o nível de dificuldade: ";
                cin >> nivel;
                break;
        }
    } while(opcao != '0');


    return 0;
}
