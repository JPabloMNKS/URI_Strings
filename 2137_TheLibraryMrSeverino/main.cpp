#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void show(int x){
    if(x<1000 && x>99)
        cout << "0"<< x << endl;
    else if(x<100 && x>9)
        cout << "00"<< x << endl;
    else if(x>=0 && x<10)
        cout << "000"<< x << endl;
    else if(x>=1000)
        cout << x << endl;
}

int main()
{
    int n=0;
    int x=0;
    int book;
    vector<int> library;

    while(cin >> n){
        x=0;
        library.clear();
        while(n--){
                cin >> book;
                library.push_back(book);
                sort(library.begin(),library.end());
        }
        /*
        This is other kind of foreach
        for(x: library){
            if(x<1000 && x>99)
                cout << "0"<< x << endl;
            else if(x<100 && x>9)
                cout << "00"<< x << endl;
            else if(x>=0 && x<10)
                cout << "000"<< x << endl;
            else if(x>=1000)
                cout << x << endl;
        }
        */
        for_each(library.begin(),library.end(),show);
    }

    return 0;
}
