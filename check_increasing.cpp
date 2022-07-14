#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int a[num], flag = 0;
	for(int i=0;i<num;i++) {
		scanf("%d",&a[i]);
		if(i>0&&a[i]<a[i-1]) flag = -1;
	}
	if(flag == 0) printf("1");
	else printf("-1");
}
