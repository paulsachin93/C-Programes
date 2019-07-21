#include<stdio.h>
int main()
{
	char name[25];
	
	printf("Enter you name:\t");
	scanf("%[^\n]s",name);
	puts(name);
	printf("hello\n");
	return 0;
}
