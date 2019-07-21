#include<stdio.h>
#include<string.h>
int main()
{
	char source[]="Meow Meow";
	char target[20];
	
	strcpy(target,source);
	
	printf("Source String = %s \n",source);
	printf("Target String = %s \n",target);
	
	return 0;
}
