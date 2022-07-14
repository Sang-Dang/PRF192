#include<stdio.h>
#include<string.h>

int isAB(char a)
{
	if((a>='a'&&a<='z')||(a>='A'&&a<='Z')) return 1;
	return 0;
}

int main()
{
	char a[100];
	int i = -1, j = 0;
	while(a[i]!='\n') {
		i++;
		scanf("%c",&a[i]);
	}
	a[i] = '\0';
	
	char b[i];
	for(int i=0;i<strlen(a);i++) {
		if(isAB(a[i])==1) {
			b[j] = a[i];
			j++;
		} 
	}
	for(int i=0;i<j;i++) {
		printf("%c",b[i]);
	}
}
