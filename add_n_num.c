#include<stdio.h>
void getdata(int *a,int *n)
{       int i;
        printf("Enter the size of num:");
        scanf("%d",n);
        printf("Enter the numbers:");
        for(i=0;i<*n;i++)
        {
                scanf("%d",a);
                a++;
        }

}
void add(int *a,int n,int *sum)
{       int i;

        for(i=0;i<n;i++)
        {
                *sum+=*a;
                a++;
        }
}

void putdata(int sum)
{
                printf("The sum of n numbers is %d ",sum);
}
int main()
{

        int a[10],n,*p,sum=0;
        p=a;
        getdata(p,&n);
        add(p,n,&sum);
        putdata(sum);


}

~
~
~
~
