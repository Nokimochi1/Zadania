#include <cstdio>

int k, w, m;
int wynik;

int main(){

   scanf("%d %d %d",&k, &w, &m);

    wynik = (w - k + m - 1)/m;

    printf("%lld", wynik);

}