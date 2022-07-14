#include<stdio.h>

int removeDuplicates(int *a, int *num)
{
	int i = 0, flag = 0;;
	while(i<*num) {
		flag = 0;
		for(int j=0;j<i;j++) {
			if(a[i]==a[j]) {
				//shift 
				for(int x=i+1;x<*num;x++) {
					a[x-1] = a[x];
				}
				flag = 1;
			}
		}
		if(flag == 0) {
			i++;
		}
		else {
			*num = *num - 1;
		}
	}
}

int main()
{
	int num;
	scanf("%d",&num);
	int a[num];
	for(int i=0;i<num;i++) scanf("%d",&a[i]);
	removeDuplicates(a, &num);
	for(int i=0;i<num;i++) printf("%d ",a[i]);
}
