#include <cstdio>
#include <math.h>
int k, p;
long long wynik;
int main(){

    scanf("%d", &k);

    for(int i = 0;i<=k; i++){
        scanf("%d", &p);  
        wynik = wynik + pow(2, i) * p;
    }
    
    printf("%lld", wynik + 1);
}