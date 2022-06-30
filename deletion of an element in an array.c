#include<stdio.h>
int main()
{
int array[100],position,c,n;
printf("enter the no.of elements in an array\n");
scanf("%d",&n);
printf("enter %d elements \n,n");
for (c=0;c<n;c++)
scanf("%d",&array[c]);
printf("enter the location where we want to delete an element\n");
scanf("%d",&position);
if(position>=n+1)
printf("deletion not possible \n");
else
{
	for(c=position-1;c<n;c++)
	array[c]=array[c+1];
	
printf("resultant array is \n");
for(c=0;c<n-1;c++)
printf("%d\n",array[c]);
}
return 0;
}
