#include<stdio.h>
#include<stdlib.h>

int checkPrime(int num)
{
	if(num%2==0&&num!=2) return 0;
	for(int i=3;i*i<num;i+=2) 
		if(num%i==0) 
			return 0;
	return num>=2;
}

int main()
{
	int num;
	scanf("%d",&num);
	int a[num], save = -1, flag = 0;
	for(int i=0;i<num;i++) {
		scanf("%d",&a[i]);
		if(checkPrime(a[i])==1 && flag == 0) {
			save = i; 
			flag = 1;
		}
	}
	if(save == -1) printf("-1");
	else printf("%d",a[save]);
}
