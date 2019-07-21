#include<stdio.h>
int xstrlen(char *);
int main()
{
	char arr[]="booooooooo";
	int len1,len2;
	
	len1=xstrlen(arr);
	len2=xstrlen("Teddy Bear, Teddy Bear");
	
	printf("String = %s \nLength=%d\n",arr,len1);
	printf("String = %s \nLength=%d\n","Teddy Bear, Teddy Bear",len2);
	
	return 0;
}

int xstrlen(char *s)
{
	int length = 0;
	
	while(*s!='\0')
	{
		length++;
		s++;
	}
	return (length);
}
