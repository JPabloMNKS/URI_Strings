#include <iostream>

using namespace std;

char rot13(char p, char c){
    c = (p - c + 13) % 26 + c;
    p = c;
    return p;
}

int main()
{
    char p[50];
    char c;

    while(cin.getline(p,51)){

        for(int i=0; p[i] != '\0';i++){
            switch (p[i]) {
            case 'A' ... 'Z':
                cout << rot13(p[i],'A');
                break;
            case 'a' ... 'z':
                cout << rot13(p[i],'a');
                break;
            default:
                cout << p[i];
                break;
            }
        }
        cout << endl;
    }

    return 0;
}
