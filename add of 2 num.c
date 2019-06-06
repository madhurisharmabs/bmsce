#include<stdio.h>
int getdata(int *a,int *b)
{
     printf("Enter the two numbers:");
     scanf("%d%d",&a,&b);
}
int add(int a,int b)
{
	int c;
	c=a+b;
        return c;
}
int putdata(int c)
{
	printf("%d+%d=%d",c);
}
   
int main()
{
	int x,y,z;
	getdata(x,y);
        putdata(z);
	z=add(x,y);
}
    
