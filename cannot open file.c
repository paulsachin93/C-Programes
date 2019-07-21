#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	
	fp=fopen("king.txt","r");
		
	if(fp==NULL)
		{
			puts("Cannot open file because such a file doesnot exist.");
			exit(1);
		}
	return 0;
}
