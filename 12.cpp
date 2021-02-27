#include <bits/stdc++.h> 

using namespace std;
//silnia


long long silnia(int n){

    if (n<2){

        return 1; 
    }

    return n*silnia(n-1); 
}

int main(){


    int a;

    cin>> a;

    cout<< silnia(a);
}