#include<stdio.h>

void printRectangle(int a, int b)
{
	for(int i=0;i<a;i++) {
		for(int j=0;j<b;j++) 
			printf("*");
		printf("\n");
	}
}

void printHollowRectangle(int a, int b)
{
	for(int i=0;i<a;i++) {
		for(int j=0;j<b;j++) {
			if(i!=0&&i!=a-1) {
				if(j==0 || j==b-1) printf("*");
				else printf(" ");
			}
			else printf("*");
		}
		printf("\n");
	}
}

int main()
{
	int a;
	scanf("%d",&a);
	int b;
	scanf("%d",&b);
	printRectangle(a,b);
	printf("\n");
	printHollowRectangle(a,b);
}
