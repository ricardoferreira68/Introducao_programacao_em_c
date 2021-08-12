#include <iostream>
#include <iomanip>
#include <unistd.h>
#include <fstream>
using namespace std;
int main(void)
{
    int lancar = 4;
    int bola, alcance, arremesso, acerto;
    float media;
    acerto = 0;
    arremesso = 5;
    bola = 10;
    alcance = 0;
    while(bola != 0)
    {
        while (alcance<lancar+2)
        {
            system("clear");
            cout << "=============================================" << endl;
            cout << " BASKET BALL               PRAY STATION 2021 " << endl;
            cout << endl;
            cout << " " << bola << " bola(s)  " << endl;
            cout << " " << arremesso << " arremesso(s)" << endl;
            cout << " " << acerto << " acerto(s)" << endl;
            cout << " " << media << " média acerto" << endl;
            cout << endl;
            cout << endl;
            cout << "                                     _____| " << endl;
            cout << "                                     \\   /| " << endl;
            cout << "                                          | " << endl;
            if (alcance <= (lancar+1)/2)
            {
                for (int i=1;i<7-alcance;i++)
                    cout << endl;
                cout << "                          ";
                if (alcance==0)
                    cout << endl;
                else
                    cout << setw(alcance+1) << "o " << endl;
                for (int i=0;i<alcance;i++)
                    cout << endl;
                if (alcance==0)
                    cout << "                      O_o " << endl;
                else
                    cout << "                     _O_ " << endl;
            }
            else
            {
                for (int i=0;i<alcance;i++)
                    cout << endl;
                cout << "                          ";
                cout << setw(alcance+1) << "o " << endl;
                for (int i=1;i<7-alcance;i++)
                    cout << endl;
                if (alcance==0)
                    cout << "                      O_o " << endl;
                else
                    cout << "                     _O_ " << endl;
            }
            cout << "                      |   " << endl;
            cout << "                     / \\ " << endl;
            cout << "============================================" << endl;
            sleep(1);
            alcance++;
        }
//        if (alcance==7)
//        {
            alcance = 0;
            bola--;
//        }
        cout << "Informe a força do lançamento (0 a 9): ";
        cin >> lancar;
    }
    return 0;
}
