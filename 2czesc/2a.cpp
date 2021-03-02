#include <cstdio>



long long potega(long long a, long long n)
{
	long long w = 1;
	
	while(n>0)
	{
		if (n%2 == 1)
			w *= a;
			
		a*= a;
		n/=2; 
	}
	return w;
}


int a,b;

int main(){

    scanf("%d %d", &a, &b);

    if (b == 0){
        printf("%d", 1);
        return 0;

    }

    a = a % 10;
    b = b % 10;
    a = potega(a, b);

    printf("%d", a % 10);
    
}