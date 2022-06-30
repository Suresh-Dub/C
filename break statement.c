#include<stdio.h>
void main()
{
	int a=0;
	while(a<10)
	{
		if(a=9)
		continue;
		printf("\n statement %d",a);
		a++;
	}
	printf("\nend of program");
}
