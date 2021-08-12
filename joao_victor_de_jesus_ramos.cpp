#include <iostream> 
using namespace std;

int main() 
{
  int key = 0;
  while (key < 1)
  {
    system("clear");
    int select, inimigo = 10, vidas = 10, missil = 5;
    char escolha;
    cout << "=======BATALHA ESPACIAL=======  \n"
            "  .  :  *   Menu     *  .  ¨  \n\n"
            "      .    Jogar(1)      *      \n"
            "  *     Como Jogar(2)  .        \n" 
            "    .  *   Sobre(3)  .    *   \n\n"
            "  .        Sair(0)    *  v.0.1  \n"
            "Escolha: ";
    cin >> select;
    if (select == 1) 
    {
      while (inimigo > 0 && vidas > 0) 
      {
        system("clear");
        cout <<"======== Batalha!! ========          \n"
                "       ____________                  \n"
                "      |Nave inimiga|                 \n"
                "      |    "  << inimigo << "/10   |   \n"
                "       ‾‾‾‾‾‾‾‾‾‾‾‾                  \n"
                "  .    M   M M   M  .   *            \n"   
                " *    |||=|¨¨¨|=|||     .            \n"
                "   .   V  |!@!|  V  .     *          \n"
                " ¨  *      \\!/      *    .          \n"
                "  :   .     V   .      *           \n\n"
                "==========================           \n"
                "Vida:        Mísseis:                \n"
             << vidas << "/10" << "        " << missil << "/5\n\n"
             << "Defender(D)" << "| Missil(M)         \n"
                "==========================           \n";
        cin >> escolha;
        if (escolha == 'D' || escolha == 'd') 
        {
          vidas--;
          cout << "Voce defendeu o ataque! -1 de vida\n"
                  "(qualquer tecla p/continuar): ";
          string next;
          cin >> next;
        } 
        else if (escolha == 'M' || escolha == 'm') 
        {
          missil--;
          cout << "Voce lançou um missil!\n"
                  "O inimigo perdeu -2 de vida!\n"
                  "(qualquer tecla p/ continuar): \n";
          string next;
          cin >> next;
          inimigo --; inimigo --;
        }
      }
      if (vidas < 1) 
      {
        system("clear");
        cout << "Voce foi destruido!\nGAME OVER!!";
        cout << "\n(qualquer tecla p/sair): ";
        string next;
        cin >> next;
      } 
      else if (inimigo < 1) 
      {
        system("clear");
        cout << "A nave inimiga foi destruida!\nVOCE GANHOU!!";
        cout << "\n(qualquer tecla p/sair): ";
        string next;
        cin >> next;
      }
    } 
    else if (select == 2) 
    {
      system("clear");
      cout << "\n"
              "===================================================\n"
              "        Você faz parte da tropa de pilotos         \n"
              "       da resistência, em uma de suas missões,     \n"
              "    você é interceptado por uma nave do império    \n"
              "       galático, e precisa destruí-la antes        \n"
              "              que você vire história!!           \n\n" 
              "=================== Como jogar ====================\n"
              " Para realizar os comandos e navegar pelas opções  \n"
              "insira as teclas indicadas na tela e aperte enter  \n"
              "para registrar o comando desejado.                 \n"
              " O jogo funciona com um sistema de turnos e acaba  \n"
              "quando a sua vida ou a vida de seu inimigo chegar  \n"
              "a zero.                                            \n"
              " A cada turno você pode escolher a opção de defen- \n"
              "der apertando a tecla 'D' ou de lançar um míssil   \n"
              "usando a tecla 'M'                                 \n"
              " Ao defender, você perde uma vida e ao lançar um   \n"
              "míssil você ataca o inimigo, porém gastando 1 de   \n"
              "seus 5 mísseis.                                  \n\n"
              "(qualquer tecla p/ voltar): ";
      string next;
      cin >> next;
    }
    else if (select == 3)
    {
      system("clear");
      cout <<"======================= Sobre =======================\n"
              "               Batalha Espacial ver.:0.1             \n"
              "                     By:JoViJeRa                   \n\n"
              " Este programa foi feito como um trabalho avaliativo \n"
              "da disciplina de Intodução à Programação Estruturada \n"
              "em C do curso de Engenharia da Computação da faculda-\n"
              "de Estácio.                                        \n\n"
              "Equipe:                                              \n"
              "Arthur Corrêa Duarte Tapajós\nJoão Vitor de Jesus Ramos\n"
              "Johan Lima Cavaleiro Macedo\nSérgio Renato Nascimento Bernardes"
              "\n\n(qualquer tecla p/ voltar): ";
      string next;
      cin >> next;
    }
    else if (select == 0)
    {
      system("clear");
      key++;
    }
  }
	return 0;
}