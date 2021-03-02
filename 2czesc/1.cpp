#include <cstdio>

int a, b, k;
int liczba;
int main(){

    scanf("%d %d %d", &a, &b, &k);

    liczba = b / k - (a - 1) / k;


    printf("%d", liczba);

}
