#include <bits/stdc++.h>


using namespace std;
//oceny
//juz widze ze nie optymalne ale na szybko robilem

int main(){
    int lista[1005];
    int n;
    int jedynka = 0;
    int dwojka = 0;
    int trojka = 0;
    int czworka = 0;
    int piatka = 0;
    int szostka = 0;

    cin>>n;

    for(int i = 1; i <= n; i++){
        cin>> lista[i];
    }

    for(int i = 1; i<=n; i++){

        if (lista[i] == 1) jedynka += 1;
        if (lista[i] == 2) dwojka += 1;
        if (lista[i] == 3) trojka += 1;
        if (lista[i] == 4) czworka += 1;
        if (lista[i] == 5) piatka += 1;
        if (lista[i] == 6) szostka += 1;


    }

    cout<< jedynka << " " << dwojka << " " << trojka << " " << czworka << " " << piatka << " "<< szostka;

}