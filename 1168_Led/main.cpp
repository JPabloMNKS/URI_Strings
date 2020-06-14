#include <iostream>

using namespace std;

int main()
{
    int n;
    char leds[101];
    int quantity=0;
    cin >> n;

    while(n--){
        cin >> leds;
        quantity = 0;

        for(int i=0; i<101;i++){
            if(leds[i] == NULL)
                break;
            else if(leds[i]== '1')
                quantity +=2;
            else if(leds[i]== '7')
                quantity +=3;
            else if(leds[i]== '4')
                quantity +=4;
            else if(leds[i]== '2' || leds[i]== '3' || leds[i]== '5')
                quantity +=5;
            else if(leds[i]== '6' || leds[i]== '9' || leds[i]== '0')
                quantity +=6;
            else if(leds[i]== '8')
                quantity +=7;
        }
    cout << quantity << " leds" << endl;
    }


    return 0;
}
