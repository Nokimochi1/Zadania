#include <iostream>



using namespace std;


int main(){
    int n;
    int j;
    long long int min = 10000000000;
    cin>> n;

    for (int i = 0; i<n; i++){
        cin>> j;
        if (j < min) min = j;

    }
    cout << min;


}