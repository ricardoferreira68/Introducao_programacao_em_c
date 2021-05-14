#include <stdio.h>
int main(void)
{
    int TemIngresso;
    TemIngresso = 0;  //1-Pago. 0-Não pago.

    if (!TemIngresso) 
	    printf("Entrada proibida!");
    else 
	    printf("Entrada autorizada!");
    return(0);
}
