#include <stdio.h>
int main(void)
{
    int largura, comprimento, area;
    scanf("%d", &largura);
    scanf("%d", &comprimento);
    area = largura * comprimento;
    printf("%d\n", area);
    return(0);
}