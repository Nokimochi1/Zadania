#include <cstdio>
#include <map>
using namespace std;


int main() {
    int n, k;
    map <int, int> cnt;
    
    scanf("%d %d", &n, &k);
    for(int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
        cnt[-a]++;
    }
    
    int res = 0;
    
    int s = 0;
    
    for(auto i: cnt) {
        res = max(res, i.second + min(k, s));
        s += i.second;
    }
    
    printf("%d\n", res);
}
