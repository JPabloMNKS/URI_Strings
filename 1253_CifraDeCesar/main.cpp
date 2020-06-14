#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n,tam,rot;
    char decode;
    char cod[50];

    cin >> n;
    while(n--){
        cin >> cod;
        cin >> rot;
        tam = strlen(cod);
        for(int i=0; i<tam;i++){
            if(cod[i]-rot < 65){
                decode = cod[i]-rot+26;
                cout << decode;
            }
            else if(cod[i]-rot <= 90){
                decode = cod[i]-rot;
                cout << decode;
            }
        }
        cout << endl;
    }

    return 0;
}
