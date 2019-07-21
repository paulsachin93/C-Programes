#include<stdio.h>

int main()
{
	int arr[]={10,20,36,72,45,36};
	int *k,*j;
	
	j=&arr[4];
	k=(arr+4);
	{
		if(j==k)
		printf("The 2 pointers point to the SAME location.\n");
		else
		printf("The 2 pointers DO NOT point to the same location.\n");
	}
	return 0;
}
