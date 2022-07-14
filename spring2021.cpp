#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void printMenu()
{
	printf("1. Question 1\n");
	printf("2. Question 2\n");
	printf("3. Question 3\n");
	printf("4. Exit\n");
}

void question1()
{
	int a[4], max, min;
	for(int i=0;i<4;i++) {
		scanf("%d",&a[i]);
		if(i==0) {
			max = a[i];
			min = a[i];
		}
		else if(a[i]>max) max = a[i];
		else if(a[i]<min) min = a[i];
	}	
	printf("a = %d, b = %d\n",max, min);
	system("pause");
}



void question2()
{
	int num;
	scanf("%d",&num);
	int a[num], b[6], j = -1;
	for(int i=0;i<num;i++) {
		scanf("%d",&a[i]);
		if(i>=num-6) {
			j++;
			b[j] = a[i];
		}
	}
	
	for(int i=num-6;i<num;i++) {
		a[i] = b[j];
		j--;
	}
	
	for(int i=0;i<num;i++) {
		printf("%d ",a[i]);
	}
	system("pause");
}

void getArray(char *a, int *len)
{
	while(1) {
		char temp;
		scanf("%c",&temp);
		a[*len] = temp;
		if(a[*len] == '\n') {
			a[*len] = '\0';
			break;
		}
		
		*len=*len+1;
		char *b;
		b = (char*)realloc(a,(*len+1)*sizeof(char));
	}
}

void question3()
{
	char *a;
	int len = 0;
	a = (char*)malloc(len*sizeof(char));
	
	getArray(a,&len);
	
	puts(a);
	
	system("pause");
}

int main()
{
	int input, flag = 0;
	while(flag == 0) {
		system("cls");
		printMenu();
		scanf("%d",&input);
		switch(input) {
			case 1: {
				question1();
				break;
			}
			case 2: {
				question2();
				break;
			}
			case 3: {
				question3();
				break;
			}
			case 4: {
				
				break;
			}
		}
	}
}
