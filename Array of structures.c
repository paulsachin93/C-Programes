#include<stdio.h>
void linkfloat();
int main()
{
	struct book
	{
		char name;
		float price;
		int pages;
	};
	struct book b[10];
	int i;
	
	for(i=0;i<=5;i++)
	{
		printf("Enter names:");
		fflush(stdin);
		scanf("\n%c",&b[i].name);
		
		printf("Enter prices:");
		fflush(stdin);
		scanf("%f",&b[i].price);
		
		printf("Enter Pages:");
		fflush(stdin);
		scanf("%d",&b[i].pages);
	}
	
	for(i=0;i<=5;i++)
	
		printf("%c%f%d",b[i].name,b[i].price,b[i].pages);
		
	return 0;
	}
void linkfloat()
{
	float a=0,*b;
	b=&a;
	a=*b;	
}
