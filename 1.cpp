#include <cstdio>

using namespace std;

int n, k;
int tab[500005];
int s = 0;

int main(){
    scanf("%d %d", &n, &k);

    for(int i = 0; i < n; i++){

        scanf("%d", &tab[i]);

        s += tab[i];
    }
    sort(tab, tab + n);
    
    for(int i = 0; i < k; i++){
        s += 9 - tab[i];
    }
    printf("%d\n", s);
}