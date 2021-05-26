// Série R = 1+4+9+...+N^2
#include <iostream>
using namespace std;
int main(void)
{
    int N, R=0;
    cout << "Informe o N: ";
    cin >> N;
    for(int i=1;i<=N;i++)
    {
        R = R + i*i;
    }
    cout <<"R = "<< R<<endl;
    return 0;
}
