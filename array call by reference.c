#include<stdio.h>
void disp(int *);
void show(int **);
int main()
{
	int i;
	int marks[]={55,65,75,56,78,78,90};
	
		for	(i=0;i<=6;i++)
		{	
		disp(&marks[i]);
		}
		return 0;
}
void disp(int *n)
	{
	show(&n);
	}
void show(int **m)
	{
		printf("%d\n",**m);
	}
