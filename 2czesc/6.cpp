#include <cstdio>

int n;

int main(){
    
    scanf("%d", &n);
    long long wynik = n;
    
    for(int i = 2; i * i <= n; i++){
        int cnt = 0;
        while(n % i == 0){
            cnt++;
            n /= i;
        }
        if(cnt % 2) wynik *= i;
    }
    
    if(n > 1) wynik *= n;
    
    printf("%lld", wynik);
}

