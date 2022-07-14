#include<stdio.h>
#include<string.h>

int findOccur(char b[], char find)
{
	int count = 0;
	for(int i=0;i<strlen(b);i++) {
		if(b[i]==find) count++;
	}
	return count;
}

int main()
{
	char a[50];
	int i = -1, j = 0;
	while(a[i]!='\n') {
		i++;
		scanf("%c",&a[i]);
	}
	a[i] = '\0';
	char b[i];
	for(int i=0;i<strlen(a);i++) {
		int temp = findOccur(b, a[i]);
		if(temp==0) {
			b[j] = a[i];
			j++;
			printf("%c_%d ", a[i],findOccur(a,a[i]));
		} 
	}
}
