#include<stdio.h>
#include<string.h>

int main()
{
	char string1[]="MEOW MEOW";
	char string2[]="TEDDY";
	int i,j,k;
	
	i = strcmp(string1,"MEOW MEOW");
	j = strcmp(string1,string2);
	k = strcmp(string1,"TEDDY BOO");
	
	
	printf("%d%d%d\n",i,j,k);
	return 0;
}

