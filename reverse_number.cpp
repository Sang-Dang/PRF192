//program that find the reverse of a number

#include<stdio.h>

int power(int base, int exponent)
{
	int product = 1;
	for(int i=0;i<exponent;i++) {
		product*=base;
	}
	return product;
}

int numberLength(int num) {
	int count = 0;
	while(num>0) {
		num/=10;
		count++;
	}
	return count;
}

int reverseNumber(int num)
{
	int answer = 0, current = numberLength(num)-1;
	while(num>0) {	
		answer += (num%10) * power(10,current);
		current--;
		num/=10;
	}
	return answer;
}

int main()
{
	int num;
	scanf("%d",&num);
	
	printf("The reverse of %d is %d", num, reverseNumber(num));
}
