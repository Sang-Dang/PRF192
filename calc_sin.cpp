#include<stdio.h>
#include<math.h>

double absolute(double num)
{
	if(num>=0) return num;
	else return -1*num;
}

double calcSin(double num, double max)
{
	double x = num;
	double fact = 1;
	double facta = 1;
	double temp = -1;
	double answer;
	while(true){
		temp*=-1;
		double temp1 = temp*(x/facta);
		printf("%lf\n",temp1);
		if(absolute(temp1)<=max) return answer+=temp1;
		answer+=temp1;
		
		x*=x*x;
		fact+=2;
		facta*=(fact-1)*(fact);
		printf("%lf and %lf\n",x,fact);
	}
	return answer;
}

int main()
{
	double num;
	scanf("%lf",&num);
	double max;
	scanf("%lf",&max);
	
	printf("%.4lf",calcSin(num,max));
}
