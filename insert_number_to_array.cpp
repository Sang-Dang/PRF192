#include<stdio.h>

void shift(int a[], int start, int end)
{
	for(int i=end;i>start;i--) {
		a[i] = a[i-1];
	} 
}

int main()
{
	int num, p;
	scanf("%d",&num);
	int a[num+1];
	for(int i=0;i<num;i++) {
		scanf("%d",&a[i]);
	}
	a[num] = 0;
	
	scanf("%d",&p);
	p--;
	shift(a, p, num);
	
	scanf("%d",&a[p]);
	
	for(int i=0;i<num+1;i++) {
		printf("%d\n",a[i]);
	}
	
	
}
