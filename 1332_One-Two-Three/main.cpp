#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n;
    int one = 0;
    int two = 0;
    char word[6];
    cin >>n;
    while(n--){
        one = 0;
        two = 0;
        cin >> word;
        int length = strlen(word);

        if(length == 5)
            cout << 3 << endl;
        else{
            if(word[0]== 'o')
                one++;
            if(word[0]== 't')
                two++;
            if(word[1]== 'n')
                one++;
            if(word[1]== 'w')
                two++;
            if(word[2]== 'e')
                one++;
            if(word[2]== 'o')
                two++;
        }

        if(one==2 || one ==3)
            cout << 1 << endl;
        else if(two==2 || two ==3)
            cout << 2 << endl;

    }
    return 0;
}
