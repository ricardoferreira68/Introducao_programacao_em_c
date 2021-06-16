#include <iostream>
using namespace std;
int main(void)
{
    int i, j, aluno;
    float NOTAS[5][3];
    cout << "Controle do Professor " <<endl<<endl;
    for (i=0;i<5;i++)
    { 
        for(j=0;j<3;j++)
        {
            cout << "Nota: ";
            cin >> NOTAS[i][j];
        }
    }

    cout <<  "Consultar aluno (1000 p/ encerrar'): ";
    cin >> aluno;
    while(aluno != 1000)
    { 
        cout << "Aluno "<< aluno << ": ";
        cout << "AV1("<< NOTAS[aluno][0] << ") ";
        cout << "AV2( "<< NOTAS[aluno][1] << ") ";
        cout << "AV3( "<< NOTAS[aluno][2] << ") ";
        cout << endl << endl;
        cout <<  "Consultar aluno (1000 p/ encerrar'): ";
        cin >> aluno;
    }
    return 0; 
}
