#include <iostream>
using namespace std;
int main()
{
int vidas;
char DEFESA;
vidas = 10;
DEFESA = 9;
//cout <<"================"<<endl;
cout <<"voce esta sendo atacado, aperte 'd' para se proteger"<<endl;
cin >> DEFESA;
cout <<"9 vidas restantes"<<DEFESA<<endl;
while (vidas<-1);
cout <<"================"<<endl;
cout <<"voce esta sendo atacado, aperte 'd' para se proteger"<<endl;
cin >> DEFESA;
cout <<"8 vidas restante"<<DEFESA<<endl;
while (vidas<-1);
cout <<"voce esta sendo atacado, aperte 'd' para se proteger"<<endl;
cin >> DEFESA;
cout <<"7 vidas restantes"<<DEFESA<<endl;
while (vidas<-1);
cout <<"================"<<endl;
cout <<"voce esta sendo atacado, aperte 'd' para se proteger"<<endl;
cin >> DEFESA;
cout <<"6 vidas restante"<<DEFESA<<endl;
while (vidas<-1);
cout <<"voce esta sendo atacado, aperte 'd' para se proteger"<<endl;
cin >> DEFESA;
cout <<"5 vidas restantes"<<DEFESA<<endl;
while (vidas<-1);
cout <<"================"<<endl;
cout <<"voce esta sendo atacado, aperte 'd' para se proteger"<<endl;
cin >> DEFESA;
cout <<"4 vidas restante"<<DEFESA<<endl;
while (vidas<-1);
cout <<"voce esta sendo atacado, aperte 'd' para se proteger"<<endl;
cin >> DEFESA;
cout <<"3 vidas restantes"<<DEFESA<<endl;
while (vidas<-1);
cout <<"================"<<endl;
cout <<"voce esta sendo atacado, aperte 'd' para se proteger"<<endl;
cin >> DEFESA;
cout <<"2 vidas restante"<<DEFESA<<endl;
while (vidas<-1);
cout <<"voce esta sendo atacado, aperte 'd' para se proteger"<<endl;
cin >> DEFESA;
cout <<"1 vidas restantes"<<DEFESA<<endl;
while (vidas<-1);
cout <<"================"<<endl;
while (vidas >>= 10)
if(DEFESA== 'd') 
	(vidas <<-1);
	cout<<"vidas: "<<vidas<<endl;

cout<<"voce perdeu"<<endl;
if(vidas== 0)
return 0;

}
