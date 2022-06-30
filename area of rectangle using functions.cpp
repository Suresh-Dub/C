#include<stdio.h>
int Area(int l,int b)
{
    int a;
    a=l*b;
    return a;
}
int main()
{
  
  int length,breath,A;
  printf("Enter length and breath of the Rectangle\n");
  scanf("%d%d",&length,&breath);
  A=Area(length,breath); 
  printf("Area of the Rectangle is: %d",A);
    return 0;    
}

