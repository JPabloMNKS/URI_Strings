#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n,aux=0,aux1=0;
    string a,b,c;

    cin>>n;
    while(aux<n){
        cin >> a >> b;
        int aT = a.length();
        int bT = b.length();

        int tam = max(aT,bT);

        aux1=1;
        for(int i=0; i<tam; i++){
            if(aux1 <= aT && aux1 <= bT)
                c += a.substr(i,1)+b.substr(i,1);
            else if(aux1 > aT && aux1 <= bT)
                c += b.substr(i,1);
            else if(aux1 > bT && aux1 <= aT)
                c += a.substr(i,1);

            aux1++;
        }
        cout << c <<endl;
        c.clear();

        aux++;
    }

    return 0;
}
