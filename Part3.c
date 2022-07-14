#include<stdio.h>

void swap(float *a, float *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int i, j, x;
	float a[5];
	for(i=0;i<5;i++) {
		scanf("%f",&a[i]);
	}
	int len = sizeof(a)/sizeof(a[0]);

	
	for(i=0;i<len-1;i++) {
		for(j=0;j<len-i-1;j++) {
			if(a[j]>a[j+1]) swap(&a[j], &a[j+1]);
		}
	}
	
	for(i=0;i<len;i++) {
		printf("%f ",a[i]);
	}
}
