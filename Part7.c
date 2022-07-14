#include<stdio.h>
#define MAXN 7

int findOcc(int b[], int num, int limit)
{
	int count = 0, i;
	for(i = 0; i < MAXN; i++) {
		if(b[i] == num) count++;
	}
	return count;
}

int findLength(int num) 
{
	int count = 0;
	while(num>0) {
		num/=10;
		count++;
	}
	return count;
}

int main()
{
	int a[MAXN], b[MAXN][2];
	int i, j = 0, x, max = 0, flag = 0;
	
	for(i=0;i<MAXN;i++) {
		scanf("%d",&a[i]);
		if(findLength(a[i])==2 && findOcc(*b, a[i], j) == 0) {
			b[j][1] = a[i];
			j++;
			flag = 1;
		}
	}
	
	if(flag == 0) {
		printf("no two-digit number");
		return 0;
	}
	
	for(i=0; i < j; i++) {
		b[i][2] = findOcc(a,b[i][1],MAXN);
		if(b[i][2] > max) max = b[i][2];
	}
	
	for(i=0; i < j; i++) {
		if(b[i][2]==max) printf("%d ", b[i][1]);
	}
	return 0;
}
