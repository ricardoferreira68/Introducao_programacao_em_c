#include <stdio.h>
int main(void)
{
    //Precedência entre operadores.
    int A, B, C;
    float X, Y, Z;
    A = 50;
    B = 20;
    C = 30;
    printf("A %% B - C =  %d \n", A % B - C);
    printf("A - B %% C =  %d \n", A - B % C);
    printf("A * B / C =  %d \n", A * B / C);
    printf("A / B * C =  %d \n", A / B * C);
    printf("A++ + B * C =  %d \n", A++ + B * C);
    printf("++B =  %d \n", ++B);
    printf("C++ =  %d \n", C++);
    printf("\n");
    X = 50;
    Y = 20;
    Z = 30;
    printf("X * Y / Z =  %f \n", X * Y / Z);
    printf("X / Y * Z =  %f \n", X / Y * Z);
    printf("X++ + Y * Z =  %f \n", X++ + Y * Z);
    //Fim do programa
    return(0);
}