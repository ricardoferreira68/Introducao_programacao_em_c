#include <stdio.h>
int main(void)
{
    //Declara as Variáveis utilizadas no programa.
    int A, B, Resultado;
    A = 50;
    B = 20;
    Resultado = A == B;   //Resultado = 0 (falso)
    Resultado = A != B;    //Resultado = 1 (verdadeiro)
    Resultado = A < B;    //Resultado = 0 (falso)
    Resultado = A > B;    //Resultado = 1 (verdadeiro)
    Resultado = A <= B;   //Resultado = 0 (falso)
    Resultado = A >= B;    //Resultado = 1 (verdadeiro)
    printf("A == B =  %d \n", A == B);
    printf("A != B =  %d \n", A != B);
    printf("A < B =  %d \n", A < B);
    printf("A > B =  %d \n", A > B);
    printf("A <= B =  %d \n", A <= B);
    printf("A >= B =  %d \n", A >= B);
    //Fim do programa
    return(0);
}