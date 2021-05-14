#include <iostream>
using namespace std;
int main(void)
{ 
   float largura, comprimento, area;
   cout << "Digite a largura da sala: ";
   cin >> largura;
   cout << "Digite o comprimento: ";
   cin >> comprimento;
   area = largura * comprimento;
   cout << "A area da sala é "<<area<<"m2\n";
   return 0; 
}
