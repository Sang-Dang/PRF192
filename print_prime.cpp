#include <stdio.h>
#include<string.h>

void generatePrime(int n, int prime[])
{
	for(int i=0;i<n+1;i++) {
		prime[i] = 1;
	}
	
	for (int p = 2; (p * p) <= n; p++) {
		if (prime[p] == 1) {
			for (int i = p * p; i <= n; i += p) {
				prime[i] = 0;
			}
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int prime[200+1];
	generatePrime(201,prime);
	
	for(int i=100;i<=n;i++) {
		if(prime[i]==1) printf("%d ",i);
	}
	return 0;
}
