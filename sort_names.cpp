//Program that sorts an array of 5 names (no spaces) in alphabetical order

#include<stdio.h>
#include<string.h>

int compareName(char a[], char b[]) 
{
	// return 1 -> a comes first
	// return -1 -> b comes first 
	// return 0 -> either comes first
	
	for(int i=0;i<strlen(a);i++) {
		int a1 = (int)a[i], b1 = (int)b[i];
		
		if(i>strlen(a)||i>strlen(b)) {
			if(strlen(a)>strlen(b)) return -1;
			else return 1;
		}
		
		if(a1>b1) return -1;
		if(a1<b1) return 1;
		
	}
	return 0;
}

void stringSwap(char *a, char *b) 
{
	char temp[100];
	strcpy(temp, a);
	strcpy(a, b);
	strcpy(b, temp);
}

int main()
{
	char names[5][100];
	for(int i=0;i<5;i++) {
		scanf("%s",&names[i]);
	}
	
	for(int i=0;i<5;i++) {
		for(int j=0;j<5-i-1;j++) {
			if(compareName(names[j], names[j+1])==-1) stringSwap(names[j],names[j+1]);
		}
	}
	 
	for(int i=0;i<5;i++) {
		printf("%s ",names[i]);
	}
}
