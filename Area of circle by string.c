#include<stdio.h>

int main()
{
	float r,a;
	const float pi=3.14;

	printf("Enter Radius of a circle = \t");
	scanf("%f",&r);
	a=pi*r*r;
	
	printf("Area of circle = %f \n",a);
	
	return 0;
}

