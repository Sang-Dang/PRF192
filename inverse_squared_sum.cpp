#include<stdio.h>
int main()
{
	int m;
	scanf("%d",&m);
	double sum = 1, i = 2;
	while(i<m) {
		sum+=1/i;
		i+=2;
	}
	printf("%.4lf",sum);
}
