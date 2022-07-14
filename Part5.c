#include<stdio.h>
int main()
{
	int n, i;
	scanf("%d",&n);
	int a[n];
	long long sum;
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
		if(a[i]%2==0) sum+= a[i]*a[i];
	}
	printf("%lld",sum);
}
