#include<stdio.h>
const int max = 3;
int main()
{
	int var[]={10,100,200};
	int i,*ptr;
	ptr= &var[max-1];
	for (i=max;i>0;i--)
	{
		printf("address of var[%d]=%x\n",i-1,ptr);
		printf("address of var[%d]=%d\n",i-1,*ptr);
		ptr--;
	}
	return 0;
}
