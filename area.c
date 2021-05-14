#include <stdio.h>
int main(void)
{ 
   float largura, comprimento, area;
   printf("Digite a largura da sala: ");
   scanf("%f", &largura);
   printf("Digite o comprimento: ");
   scanf("%f", &comprimento);
   area = largura * comprimento;
   printf("A area da sala é %3.1f m2\n", area);
   return 0; 
}
