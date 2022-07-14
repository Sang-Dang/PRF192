#include<stdio.h>

int checkElement(int a[],int num,int upper)
{
	for(int i=0;i<upper;i++) {
		if(a[i]==num) return 1;
	}
	return 0;
}

int main()
{
	int num, i=0;
	scanf("%d",&num);
	int a[num];
	while(i<num){
		scanf("%d",&a[i]);
		if(checkElement(a,a[i],i)!=1) {
			i++;
		} 
		else {
			num--;
		}
	}
	for(int i=0;i<num;i++) {
		printf("%d ",a[i]);
	}
}
