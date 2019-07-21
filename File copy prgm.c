#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fs,*ft;
	char ch;
		
	fs=fopen("Paul.txt","r");
	if(fs==NULL)
	{
		puts("Cannot Open Source File.");
		exit(1);
	}
	ft=fopen("Empty3.txt","a+");
	if(ft==NULL)
	{
		puts("Cannot Open Target File.");
		exit(2);
	}
	while(1)
		{
			ch=fgetc(fs);
			if(ch==EOF)
				break;
			else 
				fputc(ch,ft);
		}
		fclose(fs);
		fclose(ft);
		
		return 0;
}
