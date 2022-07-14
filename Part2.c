#include<stdio.h>
int main() 
{
	int n;
	scanf("%d",&n);
	
	long long product = 1;
	int i;
	
	for(i = 2; i <= n/2; i+=2) {
		product=product*i;
	}
	
	printf("%lld",product);
}
