#include <cstdio>
#include <algorithm>


using namespace std;

int n;
int b[100005];
long long m;

int main(){
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &b[i]);
    }
    scanf("%lld", &m);
    
    sort(b, b + n);
    
    long long odp = 0;
    
    for(int i = n - 1; i >= 0; i--){
        int h = min(m, (long long)b[i]);
        odp += h * h;
        m -= h;
    }
    printf("%lld\n", odp);
}
