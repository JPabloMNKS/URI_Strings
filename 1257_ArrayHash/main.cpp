#include <iostream>
#include <cstring>

using namespace std;

int run(char line[50],int elemento){
    int value=0;
    for(int i=0;i<strlen(line);i++){
        value += line[i]-65 + i + elemento;
    }
    return value;
}

int main()
{
    int n,l;
    char line[50];
    int value=0;

    cin >>n;
    while(n--){
        value = 0;
        cin >> l;
        for(int i=0; i<l;i++){
            cin >> line;
            value += run(line,i);
        }
     cout << value << endl;
    }
    return 0;
}
