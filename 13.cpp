#include <bits/stdc++.h>


using namespace std;



int main(){

    int a;
    cin>> a;

    int lista[1020];

    for(int i = 1; i <= a; i++){
        cin>> lista[i];
    }

    for(int i = 1; i<= a; i += 2){
        cout << lista[i] << " ";
    }

    cout<< "\n";

    for(int i = 2; i<= a; i += 2){
        cout << lista[i] << " ";
    }
}