#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void getString(char *a, int *len)
{
	int i;
	while(true) {
		if(i==3) {
			a[*len] = '-';
			i=0;
		}
		else {
			char temp;
			scanf("%c",&temp);
			a[*len] = temp;
			if(a[*len]=='\n') {
				a[*len]='\0';
				break;
			}
			i++;
		}
		char *temp1;
		temp1 = (char*)realloc(a,(*len+1)*sizeof(char));
		
		*len=*len+1;
	}
}

int main()
{
	char *s;
	int len = 0;
	s = (char*)malloc(len*sizeof(char));
	getString(s,&len);
	
	puts(s);
}
