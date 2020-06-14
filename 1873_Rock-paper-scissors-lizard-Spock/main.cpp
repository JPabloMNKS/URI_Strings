#include <iostream>
#include <string>


using namespace std;

int main()
{
    int c;
    string rajesh;
    string sheldon;

    cin >> c;
    while(c--){
        cin >> rajesh;
        cin >> sheldon;

        if(rajesh.compare("pedra") == 0){
            if(sheldon.compare("pedra")==0)
                cout << "empate" <<endl;
            else if(sheldon.compare("tesoura")==0 || sheldon.compare("lagarto")==0)
                cout << "rajesh" <<endl;
            else if(sheldon.compare("papel")==0 || sheldon.compare("spock")==0)
                cout << "sheldon" <<endl;
        }
        else if(rajesh.compare("papel") == 0){
            if(sheldon.compare("papel")==0)
                cout << "empate" <<endl;
            else if(sheldon.compare("pedra")==0 || sheldon.compare("spock")==0)
                cout << "rajesh" <<endl;
            else if(sheldon.compare("tesoura")==0 || sheldon.compare("lagarto")==0)
                cout << "sheldon" <<endl;
        }

        else if(rajesh.compare("tesoura") == 0){
            if(sheldon.compare("tesoura")==0)
                cout << "empate" <<endl;
            else if(sheldon.compare("papel")==0 || sheldon.compare("lagarto")==0)
                cout << "rajesh" <<endl;
            else if(sheldon.compare("pedra")==0 || sheldon.compare("spock")==0)
                cout << "sheldon" <<endl;

        }

        else if(rajesh.compare("lagarto") == 0){
            if(sheldon.compare("lagarto")==0)
                cout << "empate" <<endl;
            else if(sheldon.compare("papel")==0 || sheldon.compare("spock")==0)
                cout << "rajesh" <<endl;
            else if(sheldon.compare("pedra")==0 || sheldon.compare("tesoura")==0)
                cout << "sheldon" <<endl;

        }
        else if(rajesh.compare("spock") == 0){
            if(sheldon.compare("spock")==0)
                cout << "empate" <<endl;
            else if(sheldon.compare("pedra")==0 || sheldon.compare("tesoura")==0)
                cout << "rajesh" <<endl;
            else if(sheldon.compare("papel")==0 || sheldon.compare("lagarto")==0)
                cout << "sheldon" <<endl;
        }
    }


    return 0;
}
