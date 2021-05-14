#include <stdio.h>
int main(void)
{
    //Declara as Variáveis utilizadas no programa.
    int A, B, Resultado;
    float C, Resultado2;  
    A = 5;
    B = 2;
    C = 2;
    Resultado  = A * B;    //Resultado = 10
    printf("A * B =  %d \n", Resultado);
    Resultado  = A / B;    //Resultado = 2
    printf("A / B =  %d \n", Resultado);
    Resultado  = A % B;    //Resultado = 1
    printf("A % B =  %d \n", Resultado);
    Resultado2  = A / C;   //Resultado2 = 2.5
    printf("A / C =  %f \n", Resultado2);

    //Fim do programa
    return(0);
}
