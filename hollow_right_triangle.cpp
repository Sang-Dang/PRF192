#include<stdio.h>
int main()
{
	int len;
	scanf("%d",&len);
	for(int i=1;i<=len-1;i++) {
		printf(" ");
		for(int x = 0;x<len-i-1;x++) printf(" "); //print left spaces
		printf("*");
		if(i>=2 && i!=len) {
			int innergaps = i-2;
			for(int x = 0; x<innergaps;x++) printf(" "); //print inner gaps
			printf("*");
		}
		printf("\n");
	}
	for(int i=1;i<=len;i++) printf("*");
} 
