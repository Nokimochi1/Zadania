#include <cstdio>
#include <cmath>

float r, b, c;

int main(){

    scanf("%f", &r);

    b = M_PI * (r * r);
    c = 2 * M_PI * r;

    printf("%.3f\n%.3f", b, c);


}
