#include <stdio.h>
int main(void)
{
    int Idade, Ingresso;
    Idade = 19;
    Ingresso = 5;  //1-Pago. 0-Não pago.
	if (Idade > 18 && Ingresso == 1) 
		printf("Entrada autorizada!");
	else 
		printf("Entrada proibida!");
    return(0);
}