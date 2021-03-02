#include <iostream>

using namespace std;
//czas 

int main(){

    int a;
    int minuty;
    int godziny;
    int sekundy;
    cin>> a;

    sekundy = a % 60;
    a /= 60;
    minuty = a % 60;
    a /= 60;
    godziny = a;
    
    cout << godziny << "g" << minuty << "m" << sekundy << "s";

}
