/*
Faça um programa em Linguagem C para ler 3.000 notas e mostrar a maior entre elas.

    Entrada: 3.000 notas

			Auxiliar ← -5
			Para i ← 1 até 3000 Faça
				Leia(Nota)
				Se Nota > Auxiliar Então
					Auxiliar ← Nota
				Fim Se
			Fim Para
			Escreva(Auxiliar)

    Processamento: ← 
                              Se
                              Para / Enquanto

			    
			 
    Saída: Maior nota

*/
#include <iostream>
using namespace std;
int main(void)
{
    int i;
    float Auxiliar, Nota;
    Auxiliar = -5;
	for(i=1; i<=3000; i++)
    { 
        cout << "Digite a Nota: ";
        cin >> Nota;
        if (Nota > Auxiliar)
            Auxiliar = Nota;
    }
    cout << "A maior nota é " << Auxiliar<<endl;
    return 0;
}
