#include<stdio.h>

long long power(int num, int exp)
{
	int product = 1;
	for(int i=0;i<exp;i++) {
		product*=num;
	}
	return product;
}

int main()
{
	int a, count = -1, sum = 0;
	scanf("%d",&a);
	
	while(a>0) {
		count++;
		sum+=(a%10)*power(2,count);
		a/=10;
	}
	printf("%d",sum);
	
}
