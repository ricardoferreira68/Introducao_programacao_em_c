#include <iostream>
#include <unistd.h>
#include <fstream>
using namespace std;
int main(void)
{
    char tecla;
    int vidas, linha_bomba, foguetes;
    foguetes = 5;
    vidas = 2;
    linha_bomba = 0;
    while(vidas != 0)
    {
        sleep(1);
        system("clear");
        cout << "+========================================" << endl;
        cout << "   SPACE INVADER  -  PLAY STATION 2021   " << endl;
        cout << "                                         " << endl;
        cout << "  " << foguetes << " foguete(s)                " << vidas << " vida(s)  " << endl;
        cout << "                  _______    " << endl;
        cout << "                _/       \\_  " << endl;
        cout << "                 \\ _____ /   " << endl;
        cout << "                    \\ /      " << endl;
        for (int i=0;i<linha_bomba;i++)
            cout << endl;
        cout << "                     0       " << endl;
        for (int i=1;i<10-linha_bomba;i++)
            cout << endl;
        cout << "                    _o_       " << endl;
        cout << "                     |       " << endl;
        cout << "                    / \\                  " << endl;
        cout << "+========================================" << endl;
        linha_bomba++;
        if (linha_bomba==10)
        {
            linha_bomba = 0;
            vidas--;
        }
    }
    return 0;
}
