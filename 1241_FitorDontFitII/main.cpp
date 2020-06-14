#include <iostream>

using namespace std;

int main()
{
    int n,aux;
    int nia;
    int nib;
    char a[1000];
    char b[1000];

    cin >> n;
    while(n--){
        cin >> a;
        cin >> b;

        nia = 0;
        nib = 0;
        aux = 0;

        for(int i=0;i<1000;i++){
            if(b[i]== NULL)
                break;
            nib = i+1;
        }

        for(int i=0;i<1000;i++){
            if(a[i]== NULL)
                break;
            nia = i+1;
        }

        if(nib>nia){
            cout << "nao encaixa" << endl;
            continue;
        }

        for(int i = (nia - nib); i < nia; i++){
            if(a[i]==b[i-(nia-nib)]){
                aux++;
            }else{
                cout << "nao encaixa" << endl;
                break;
            }
        }

        if(aux == nib)
            cout << "encaixa" << endl;

    }

    return 0;
}
