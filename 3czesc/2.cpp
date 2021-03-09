#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;


string lista[200];
int a;
string slowo;

bool compare(string a, string b) {
    return (a.size() == b.size() ? a < b : a.size() < b.size());
}


int main(){

    scanf("%d", &a);
    for (int i = 0; i<a; i++){
        cin >> slowo;
        lista[i] = slowo;
    }


    sort(lista, lista + a, compare);


    for (int i = 0; i<a; i++){
        cout<< lista[i] << endl;
    }
    
}