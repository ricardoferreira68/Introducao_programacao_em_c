#include <stdio.h>
#include <math.h>
int main(void)
{
    float x, y;
    printf("\n\nDigite o valor do número: ");
    scanf("%f", &x);
    y = sqrt(x);
    printf("\nA raiz é %f\n\n", y);
    return 0;
}
