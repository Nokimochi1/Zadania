#include <cstdio>
#include <set>


using namespace std;

set <int> liczby;
int n, d, c, a, liczba;
int main(){
    scanf("%d %d", &n, &d);
    for (int i =0; i<n;i++){
        scanf("%d %d", &c, &a);
        if (c == 1){
            if(liczby.find(a) != liczby.end()) continue;
            liczby.insert(a);
            liczba += liczby.find(a - d) != liczby.end();
            liczba += liczby.find(a + d) != liczby.end();
        }
        else{
            if(liczby.find(a) == liczby.end()) continue;
            liczby.erase(a);
            liczba -= liczby.find(a - d) != liczby.end();
            liczba -= liczby.find(a + d) != liczby.end();
        }
        printf("%s\n", (liczba ? "TAK" : "NIE"));

    }



}