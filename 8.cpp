#include <iostream>


using namespace std;
// działania

int main(){

    int a, b, c;


    cin >> a >> b >> c;


    if (a + b == c){

        cout<< a << " + " << b << " = "<< c << endl;

    }

    if (a - b == c){

        cout<< a << " - " << b << " = "<< c << endl;

    }

    if (a * b == c){

        cout<< a << " * " << b << " = "<< c << endl;

    }
    if (b != 0){
        if (a / b == c){

            cout<< a << " / " << b << " = "<< c << endl;

        }
    }

    if (a % b == c){

        cout<< a << " % " << b << " = "<< c << endl;

    }
}