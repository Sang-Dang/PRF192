#include<stdio.h>

int numLen(int num)
{
	int count = 0;
	while(num>0) {
		 num/=10;
		 count++;
	}
	return count;
}

int power(int num, int exp)
{
	int product = 1;
	for(int i=0;i<exp;i++) {
		product*=num;
	}
	return product;
}

int isArmstrong(int num)
{
	int length = numLen(num), sum = 0;
	
	while(num>0) {
		sum+=power(num%10, length);
		num/=10;
	}
	
	if(sum == num) return 1;
	return 0;
}

int main()
{
	int num;
	scanf("%d",&num);
	printf("%d",isArmstrong(num));
}
