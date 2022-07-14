#include<stdio.h>
#include<string.h>

int main()
{
	char b[100];
	int i = -1, j=0;
	while(b[i]!='\n') {
		i++;
		scanf("%c",&b[i]);
	}
	char a[i];
	while(i>=0) {
		a[j] = b[i];
		i--;
		j++;
	}
	a[j+1] = '\0';

	for(int i=1;i<=strlen(a);i++) {
		if((i==1 && a[i]!=' ') || (a[i-1]==' '&&a[i]!=' ')) {
			if(a[i]>'a'&&a[i]<'z') a[i]-=32;
		}
	}
	
	for(int i=1;i<=strlen(a);i++) {
		printf("%c",a[i]);
	}
}
