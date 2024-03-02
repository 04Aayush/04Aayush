#include<stdio.h>
int main()
{
	float m1,m2,m3,m4,m5,avg;
	printf("enter 5 subject marks:");
	scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
	avg=(m1+m2+m3+m4+m5)/5;
	printf("avg=%f",avg);
	return 0;
} 
