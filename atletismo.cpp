// Média entre 32 tempos em segundos.
#include <iostream>
using namespace std;
int main(void)
{
    int tempo, menor, soma=0;
    float media;
    menor = 10000;
    for(int i=1;i<=32;i++)
    {
        cout << "Digite o tempo: ";
        cin >> tempo;
        soma = soma + tempo;
        if (tempo<menor)
            menor = tempo;
    }
    media = soma / 32.0;
    cout << "O tempo do vencedor: "<<menor<<endl;
    cout << "A média é = "<<media<<endl;
    return 0;
}
