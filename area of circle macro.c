#include<stdio.h>
#define area(x) (3.14*x*x)
int main()
{
	float r1=6.25,r2=2.5,a;
	
	a=area(r1);

			printf("Area of r1= %f\n",a);
	a=area(r2);
			printf("Area of r2= %f\n",a);
	
	return 0;
}
