#include<stdio.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int num;
	scanf("%d",&num);
	int a[num];
	for(int i=0;i<num;i++) {
		scanf("%d",&a[i]);
	}
	
	for(int i=0;i<num-1;i++) {
		for(int j=0;j<num-i-1;j++) {
			if(a[j]>a[j+1]) swap(&a[j],&a[j+1]);
		}
	}
	
	for(int i=num-1;i>=0;i--) {
		printf("%d\n",a[i]);
	}
}
