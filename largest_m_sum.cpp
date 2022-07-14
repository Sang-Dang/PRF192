#include<stdio.h>

int largest_m_sum(int num)
{
	int sum = 0, i = 0;
	while(sum<num) {
		sum+=i;
		if(sum>=num) return i-1;
		i++;
	}
}

int main()
{
	int num;
	scanf("%d",&num);
	
	printf("%d",largest_m_sum(num));
}
