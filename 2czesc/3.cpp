#include <cstdio>



int n;
int s;
long long liczba;
int g = 1;
long long h = 0;

int main(){

    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        scanf("%d", &s);
        if (s == 0) h++;
        if (s == 1) liczba = liczba + h;
    }

    printf("%lld", liczba);

}