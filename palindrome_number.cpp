#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void getDArray(char *a, int *len) 
{
	while(1) {
		char temp;
		scanf("%c",&temp);
		a[*len] = temp;
		
		if(a[*len]=='\n') {
			a[*len] = '\0';
			break;
		}
		
		char *b = (char*)realloc(a,(*len+1)*sizeof(char));
		*len = *len + 1;
	}
}
int main()
{
	char *a;
	int len = 0, flag = 0;
	a = (char*)malloc(len*sizeof(char));
	getDArray(a, &len);
	
	for(int i=0;i<strlen(a)/2-1;i++) {
		if(a[i]!=a[strlen(a)-i-1]) {
			flag = 1;
			break;
		}
	}
	
	if(flag == 1) printf("Not a palindrome");
	else printf("Is a palindrome");
}
