#include<stdio.h>
int main()
{
	int n, i, x;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		for(x = 0; x < i; x++) {
			printf(" ");
		}
		for(x = 0; x < n-i;x++) {
			printf("*");
		}
		printf("\n");
	} 
}
