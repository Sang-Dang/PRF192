#include<stdio.h>

int checkPrime(int num)
{
	int i;
	
	if(num%2==0&&num!=2) return 0;
	for(i=3;i*i<num;i+=2) {
		if(num%i==0) return 0;
	}
	return num>=2;
}

int main()
{
	int num;
	scanf("%d",&num);
	if(checkPrime(num)==1) printf("Not prime");
	else printf("Prime");
}
