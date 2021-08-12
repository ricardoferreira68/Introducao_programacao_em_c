//Considere que você participa de uma equipe de desenvolvedores DevOps e que você é responsável
//por escrever a lógica de programação para definir o término de um jogo de batalha espacial que
//deve acadar quando o jogador não tiver mais vida (variável vidas no código do jogos).
//O jogo deve começar com 10 vidas e uma vida é perdida a cada vez que o jogador acionar a tecla
//“D”, para se proteger.
//O jogo tem, também, a opção de lançamento de foguetes. Neste caso nenhuma vida é perdida, mas
//só há 5 foguetes disponíveis.
//Use a sua criatividade para imaginar como seria esse jogo e decida sobre o seu funcionamento. 

#include <stdio.h>
#include <stdlib.h>
#include <iostream> 
 using namespace std;

int main(){
   int vd=10, fg=5;
   char as;
   
  
  while(as > 'D' || as < 'F'){
    while(vd > 0 || vd < 10){
       while(vd <= 0){
            system("clear"); 
               printf("\n\t\tGAMER OVER\n\n\tSUA VIDA CHEGO A ZERO \n\n");
           
           return 0;
            }

        while(fg <= 0){
            system("clear"); 
                printf("\n\t\tGAMER OVER\n\n\tSEUS FOGUETES CHEGARAM A 0\n\n");

                return 0;
            }    
      printf("\n\tjogo de batalha espacial\n\t");
      printf("|| %d vidas||%d Foguetes||\n", vd, fg);
       printf("D pra defende\n");
       printf("F para atira\n");
       cout << "Escolha: ";
       cin >> as;

  switch(as){
    case 'd':
    case 'D':
          system("clear"); 
        printf("DEFENDEU, PREDEU 1 VIDA\n");
            vd = vd - 1; 
            printf("total de vida: %d\n", vd);     
                break;
                 
    case 'f':
    case 'F':
         system("clear"); 
        printf("LANÇAMANETO DE FOGUETE\n");
            fg = fg - 1; 
            printf("total de foquete: %d\n", fg);  
                break;
    
    default:
       system("clear"); 
       printf("Opção INVALIDA\n");
       break;

      
    
    }
  }
}

      
return 0;
 
}
