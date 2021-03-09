#include <cstdio>
#include <set> 

using namespace std;
int n;
int a;
int solution;
set <int> dis;

int main(){
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%d", &a);
        dis.insert(a);
    }
    solution = 15000 - dis.size();
    printf("%d", solution);
}