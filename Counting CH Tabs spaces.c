#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	int nol=0,not=0,nob=0,noc=0;
		
	fp=fopen("paul.txt","r");
		
	while(1)
		{
			ch=fgetc(fp);
			if(ch==EOF)
				break;
				noc++;
			
			if(ch==' ')
			nob++;
				if(ch=='\n')
				nol++;
					if(ch=='\t')
					not++;
									
		}
		
		fclose(fp);
	 	printf("Number of CHARACTERS = %d\n",noc);
	 	printf("Number of BLANKS = %d\n",nob);
	 	printf("Number of TABS = %d\n",not);
	 	printf("Number of LINES = %d\n",nol);
		
		return 0;
}
