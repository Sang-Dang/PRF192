#include<stdio.h>
void swap(int*a, int*b)
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
		if(a[i]%2==0) a[i]=0;
	}

	for(int i=0;i<num-1;i++) {
		for(int j=0;j<num-1-i;j++) {
			if(a[j]>a[j+1]) swap(&a[j],&a[j+1]);
		}
	}
	
	for(int i=num-1;i>=0;i--) {
		if(a[i]!=0) printf("%d ",a[i]);
	}
}
