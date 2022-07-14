#include<stdio.h>

int main()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	
	for(int i=0;i<a;i++) {
		for(int j=0;j<b;j++) {
			if(j!=b-1&&i!=a-1) printf(" ");
			else printf("*");
		}
		printf("\n");
	}
}
