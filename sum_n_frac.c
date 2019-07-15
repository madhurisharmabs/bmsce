#include<stdio.h>
struct Fraction
{
        int num;
        int den;
};
void getdata(int n,struct Fraction f[n])
{
        int i;
        for(i=0;i<n;i++)
        {
                 printf("Enter the %d fraction number:\n",i+1);
                 printf("Enter numerator:");
                 scanf("%d",& f[i].num);
                 printf("Enter denominator:");
                 scanf("%d",& f[i].den);
        }
}
int gcd(int a,int b)
{
        if(a>b)
        {
                return gcd(a-b,b);
        }
        else if(b>a)
        {
                return gcd(a,b-a);
        }
        return a;

}
void compute(int n,struct Fraction f[n],struct Fraction *res)
{

        int i;
       int gcdres,temp1=1;
       int temp2=0;

       for(i=0;i<n;i++)
       {
               temp1=temp1 * f[i].den;
       }
       for(i=0;i<n;i++)
       {
               temp2=temp2+f[i].num * (temp1/f[i].den);
       }

       gcdres=gcd(temp1,temp2);
      
       res->num = temp2/gcdres;

       res->den = temp1/gcdres;
}
void putdata(int n,struct Fraction f[n],struct Fraction res)
{

        int i;
         printf("The sum of n fraction num is:");
        for(i=0;i<n-1;i++)
        {
                printf("%d/%d+",f[i].num,f[i].den);

        }
        printf("%d/%d" ,f[i].num,f[i].den);
        printf("=%d/%d",res.num,res.den);
}
int main()
{
        int n;
        printf("Enter the numbers  of fraction to add :");
        scanf("%d",&n);
        struct Frac#include<stdio.h>
struct Fraction
{
        int num;
        int den;
};
void getdata(int n,struct Fraction f[n])
{
        int i;
        for(i=0;i<n;i++)
        {
                 printf("Enter the %d fraction number:\n",i+1);
                 printf("Enter numerator:");
                 scanf("%d",& f[i].num);
                 printf("Enter denominator:");
                 scanf("%d",& f[i].den);
        }
}
int gcd(int a,int b)
{
        if(a>b)
        {
                return gcd(a-b,b);
        }
        else if(b>a)
        {
                return gcd(a,b-a);
        }
        return a;

}
void compute(int n,struct Fraction f[n],struct Fraction *res)
{

        int i;
       int gcdres;
       int temp1=1;
       int temp2=0;

       for(i=0;i<n;i++)
       {

                 temp1=temp1 * f[i].den;
       }
       for(i=0;i<n;i++)
       {

               temp2=temp2+f[i].num * (temp1/f[i].den);
       }

       gcdres=gcd(temp1,temp2);

       res->num = temp2/gcdres;

       res->den = temp1/gcdres;
}
        void putdata(int n,struct Fraction f[n],struct Fraction res)
{

        int i;
        printf("The sum of n fraction num is:");
        for(i=0;i<n-1;i++)
        {
                printf("%d/%d+",f[i].num,f[i].den);

        }
        printf("%d/%d" ,f[i].num,f[i].den);
        printf("=%d/%d",res.num,res.den);
}
int main()
{
        int n;
        printf("Enter the numbers  of fraction to add :");
        scanf("%d",&n);
        struct Fraction f[n];
        struct Fraction res;
        getdata(n,f);
        compute(n,f,&res);
                                                        

}
                                  
                                                                                                                                                                                                3,1           Top
