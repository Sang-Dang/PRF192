// program that counts the elements in an array that appears the most often

#include<stdio.h>

int findOcc(int *a, int num, int length)
{
	int count = 0;
	for(int i=0;i<length;i++) {
		if(a[i]==num) count++;
	}
	return count;
}


int main()
{
	int num;
	scanf("%d",&num);
	int a[num], b[num][2], j = 0, max = 0;
	for(int i=0;i<num;i++) {
		scanf("%d",&a[i]);
		if(findOcc(*b,a[i],j)==0) {
			b[j][1] = a[i];
		}
	}
	
	for(int i=0;i<j;i++) {
		printf("%d ",b[i][1]);
	}
	
	/*for(int i=0;i<j;i++) {
		b[i][2] = findOcc(*a,b[i][1],j);
		if(b[i][2]>max) max = b[i][2];
	}
	
	printf("The elements that occur the most are: ");
	for(int i=0;i<j;i++) {
		if(b[i][2]==max) printf("%d ",b[i][1]);
	}*/
}
