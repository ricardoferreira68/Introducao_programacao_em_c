#include <iostream>
using namespace  std;
int main(void)
{
    char input;
    int vida = 10,foguetes = 5;
    system("cls");
    
    cout<< "                   Welcome to Asteroids!"<<endl;
    cout<< "==========================================================="<<endl;
    cout<< "              Voce tem 10 vidas e 5 Foguetes.           "<<endl;
    cout<< "       Aperte D para tentar se proteger asteroides.       "<<endl;
    cout<< "Aperte F para usar um Foguete e nao perder vida asteroides."<<endl;
    cout<< "==========================================================="<<endl;
    while(vida>0){
        
        cin>> input;
        if (input == 'D')
        {
            vida--;
          cout<<vida<<" vidas restantantes e "<<foguetes<<" fogetes restantes."<<endl;
        }
         else if (foguetes>0)
        { 
            foguetes--;
            cout<< vida<< " vidas restantes e "<<foguetes<<" fogetes restantes." <<endl; 
        }   
        else{
            vida--; 
            
        }
    }
    cout<< endl;
    cout<< "============================"<<endl;
    cout<<"         GAME OVER XD"<<endl;
    cout<< "============================"<<endl;
    cout<< endl;
    return 0;
}