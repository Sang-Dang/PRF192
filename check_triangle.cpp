#include<stdio.h>
#include<math.h>
double findArea(int a,int b,int c)
{
	double p = (double)(a+b+c)/2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}
int checkTriangle(int a, int b, int c)
{
	a*=a;
	b*=b;
	c*=c;
	if(a==b+c||b==a+c||c==a+b) return 1;
	else return 0;
}
int main()
{
	int a, b, c;
	scanf("%d",&a);	
	scanf("%d",&b);
	scanf("%d",&c);
	
	if(checkTriangle(a,b,c)==1) printf("Area = %.2lf",findArea(a,b,c));
	else printf("Area = 0.00");
}
