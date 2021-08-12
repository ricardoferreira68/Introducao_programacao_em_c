#include <iostream> 
using namespace std;
int main(void)
{
    char op;
    do
    {
        cout << " a- Inclusão" << endl;
        cout << " b- Consulta" << endl;
        cout << " c- Alteração" << endl;
        cout << " d- Exclusão" << endl;
        cout << " e- Listagem" << endl;
        cout << " s- Sair " << endl;
        cout << "Escolha uma opção: ";
        cin >> op;
        switch (op)
        {
            case 'a': 
            case 'A': 
                cout << "Você escolheu Inclusão" << endl;
                break;
            case 'b': 
            case 'B':
                cout << "Você escolheu Consulta" << endl; 
                break;
            case 'c': 
                cout << "Você escolheu Alteração" << endl; 
                break;
            case 'd': 
                cout << "Você escolheu Exclusão" << endl; 
                break;
            case 'e': 
                cout << "Você escolheu Listagem" << endl; 
                break;
            default: 
                cout << "Escolha um dos itens, por favor!" << endl; 
                break;
        }
    } while(op != 's' && op != 'S');
    return 0;
}
