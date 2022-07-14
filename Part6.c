#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char *a;
	int len1 = 0, i;
	int *j;
	
	a = (char*)malloc(len1*sizeof(char));

	while(1) {
		char temp;
		scanf("%c",&temp);
		a[len1] = temp;
		if(a[len1] == '\n') {
			a[len1] = '\0';
			break;
		}
		len1++;
		int *temp1;
		temp1 = (int*)realloc(a,(len1+1)*sizeof(char));
	}
	
	char find[strlen(a)];
	scanf("%[^\n]",find);
	
	char rfind[strlen(find)];
	for(i=0;i<strlen(find);i++) {
		rfind[strlen(find)-1-i] = find[i];
	}
	rfind[strlen(find)] = '\0';
	
	char *p = strstr(a,find);
	while(p!=NULL) {
		char *temp = strncpy(p,rfind,strlen(rfind));
		p = strstr(a,find);
	}
	
	puts(a);
}
