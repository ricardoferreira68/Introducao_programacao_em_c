#include <iostream>
//#include <unistd.h>
//#include <fstream>
using namespace std;
int main(void)
{
    int lancar;
    int bola, linha_bomba, arremesso, acerto;
    float media;
    acerto = 0;
    arremesso = 5;
    bola = 10;
    linha_bomba = 0;
    while(bola != 0)
    {
        //sleep(1);
        system("clear");
        cout << "================================================================================" << endl;
        cout << " BASKET BALL                                                  PRAY STATION 2021 " << endl;
        cout << endl;
        cout << " " << bola << " bola(s)  " << endl;
        cout << " " << arremesso << " arremesso(s)" << endl;
        cout << " " << acerto << " acerto(s)" << endl;
        cout << " " << media << " média acerto" << endl;
        cout << "                                                       _____| " << endl;
        cout << "                                                       \\   /| " << endl;
        cout << "                                                            | " << endl;
        for (int i=0;i<linha_bomba;i++)
            cout << endl;
        cout << "                        o " << endl;
        for (int i=1;i<10-linha_bomba;i++)
            cout << endl;
        cout << "                     O_o " << endl;
        cout << "                     |   " << endl;
        cout << "                    / \\ " << endl;
        cout << "================================================================================" << endl;
        linha_bomba++;
        if (linha_bomba==10)
        {
            linha_bomba = 0;
            bola--;
        }
    }
    return 0;
}
