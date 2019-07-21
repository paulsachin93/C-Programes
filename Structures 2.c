#include<stdio.h>
int main()
{
	struct book
	{
		char name;
		float price;
		int pages;
	};
	struct book b1={"Basic",150.00,650};
	struct book b2={"physics",190.00,750};
	struct book b3={0};
	
	printf("Address of name = %u\n",&b1.name);
	printf("Address of price = %u\n",&b1.price);
	printf("Address of pages = %u\n\n",&b1.pages);	
	
	printf("Address of name = %u\n",&b2.name);
	printf("Address of price = %u\n",&b2.price);
	printf("Address of pages = %u\n\n",&b2.pages);
	
	printf("Address of name = %u\n",&b3.name);
	printf("Address of price = %u\n",&b3.price);
	printf("Address of pages = %u\n\n",&b3.pages);
	return 0;
}
