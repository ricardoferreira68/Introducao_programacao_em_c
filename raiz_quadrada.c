#include <stdio.h>
#include <math.h>
int main(void)
{
    float x, y;
    printf("Digite o valor do número: ");
    scanf("%f", &x);
    y = sqrt(x);
    printf("A raiz é %f", y);
    return 0;
}
