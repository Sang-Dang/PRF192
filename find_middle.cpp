#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	scanf("%s",a);
	
	int middle = strlen(a)/2;
	for(int i = middle - 2; i <= middle + 2; i++) {
		printf("%c",a[i]);
	}
}
