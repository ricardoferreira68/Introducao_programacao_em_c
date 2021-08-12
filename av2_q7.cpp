#include <iostream>
using namespace std;
int main()
{
    float nota[2], media;
    for (int i = 0; i < 2; i++)
    {
        cout << "Insira a sua " << i + 1 << "a nota: ";
        cin >> nota[i];
    }
    media = (nota[0] + nota[1]) / 2;
    cout << "Sua media e " << media << "! ";
    if (media >= 6)
    {
        cout << "Voce foi aprovado!";
    }
    else
    {
        cout << "Voce foi reprovado!";
    }
    return 0;
}
