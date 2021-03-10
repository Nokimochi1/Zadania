#include <cstdio>
#include <tuple>
#include <algorithm>

using namespace std;

tuple <int, int, int> lista[1000005];
int a;

int main(){
    scanf("%d", &a);
    for (int i = 0; i<a; i++){
        scanf("%d %d", &get<2>(lista[i]), &get<0>(lista[i]));
        get<1>(lista[i]) = i + 1;

    }
    sort(lista, lista + a);
    for (int i = 0; i<a; i++){
        printf("%d\n", get<2>(lista[i]));

    }
}