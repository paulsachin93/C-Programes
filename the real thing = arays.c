#include<stdio.h>
int main()
{
	int num[]={24,34,12,44,56,17};
	int i;
		
	for(i=0;i<=5;i++)
	{
		printf(" %d\t",num[i]);
		printf("%d%d\t",*(i+num),*(num+i));
		printf("%d\n",i[num]);
	}
	return 0;
	}
