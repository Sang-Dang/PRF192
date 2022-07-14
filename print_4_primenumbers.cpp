#include<stdio.h>

int checkPrime(int num)
{
	if(num%2==0&&num!=2) return 0;
	for(int i=3;i*i<num;i+=2) {
		if(num%i==0) return 0;
	}
	return num>=2;
}

int main()
{
	int num;
	scanf("%d",&num);
	int count = 0;
	for(int i=num+1; count<4; i++) {
		if(checkPrime(i)==1) {
			printf("%d\n",i);
			count++;
		}
	}
}
