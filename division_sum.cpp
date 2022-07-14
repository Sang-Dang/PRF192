#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	if(num%2!=0)num--;
	double sum = 1, i = 2;
	while(i<=num){
		sum = sum + (double)1/i;
		i+=2;
	}
	printf("%.4lf",sum);
}
