#include<stdio.h>

int main()
{
	int num[]={24,34,12,44,56,17};
	int i,*j;
	
	j=&num[0];
	for(i=0;i<=5;i++)
	{
		printf("element no. = %d\n",i);
		printf("address = %u\n",&num[i]);
		printf("element = %d\n",num[i]);
		printf("addres = %u\n",j);
		printf("element = %d\n",*j);
		j++;
	}
	return 0;
}
