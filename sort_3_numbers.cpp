#include<stdio.h>

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a[3];
	for(int i=0;i<3;i++) scanf("%d",&a[i]);
	for(int i=0;i<3;i++) 
		for(int j=0;j<2-i;j++) 
			if(a[j]>a[j+1]) 
				swap(&a[j],&a[j+1]);
	for(int i=0;i<3;i++) printf("%d ",a[i]);
	return 0;	
}
