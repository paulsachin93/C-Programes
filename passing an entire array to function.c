#include<stdio.h>
void disp(int *,int);

int main()
{
	int num[]={24,34,12,44,56,17};
	disp(&num[0],6);
	return 0;
}
	void disp(int *j,int n)
	{
	int i;
	
	for(i=0;i<=n-1;i++)
	{
		printf("element = %d\n",*j);
		j++;
	}
	return 0;
}
