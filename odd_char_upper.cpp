#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i = -1;
	while(a[i]!='\n') {
		i++;
		scanf("%c",&a[i]);
	}
	a[i] = '\0';
	
	for(int i=0;i<strlen(a);i++) {
		if(i%2!=0) {
			if(a[i]>'a' && a[i]<'z') a[i]-=32;
		}
		printf("%c",a[i]);
	}
}
