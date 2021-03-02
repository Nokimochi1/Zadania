#include <iostream>


//krol
using namespace  std;


int main(){

    char a;
    int b;


    cin >> a >> b;


    if ((b == 1 || b == 8) && (a == 'a' || a == 'h')){

        cout << 3;

    }

    else if((b == 1 || b == 8) && (a != 'a' || a != 'h')){

        cout << 5;

    }

    else if((a == 'a' || a == 'h') && (b != 1 || b != 8)){

        cout << 5;

    }

    else{

        cout<< 8;
    }



}
