#include <iostream>
using namespace std;
int main(void)
{
    int i, j;
    i  = 10;   //Atribui o valor 10 à variável i.
    cout << "i: " << i << endl;
    i  = i + 1;   //Atribui o valor 11 à variável i.
    cout << "i: " << i << endl;
    j  = 4;   //Atribui o valor 4 à variável j.
    cout << "j: " << j << endl;
    j  += 1;   //Atribui o valor 5 à variável j.
    cout << "j: " << j << endl;
    j  -= 2;   //Atribui o valor 3 à variável j.
    cout << "j: " << j << endl;
    j  *= 4;   //Atribui o valor 12 à variável j.
    cout << "j: " << j << endl;
    j  /= 3;   //Atribui o valor 4 à variável j.
    cout << "j: " << j << endl;
    j = 11;
    j  %= 3;   //Atribui o valor 2 à variável j.
    cout << "j: " << j << endl;
    return(0);
}
