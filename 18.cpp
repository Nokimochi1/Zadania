#include <cstdio>
using namespace std;

int n;

char tab[1005][1005];

bool isX[1005];
bool isY[1005];

int main() {
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {

            scanf(" %c", &tab[i][j]);

            if(tab[i][j] == 'W') {

                isX[j] = isY[i] = true;
            }
        }
    }
    
    int j = 1;
    for(int i = 1; i <= n; i++) {

        if(isY[i]) continue;

        while(isX[j] == true) j++;

        tab[i][j] = 'W';
        j++;
    }
    printf("\n");
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            printf("%c", tab[i][j]);
        }
        printf("\n");
    }
}

