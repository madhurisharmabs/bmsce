#include<stdio.h>
struct Fraction
{
        int n;
        int d;
};
int gcd(int a,int b)
{
        if(a>b)
          gcd(a-b,b);
        else if(b>a)
          gcd(a,b-a);
        else
           return a;
}
void getdata(struct Fraction *f1,struct Fraction *f2)
{
        printf("first fraction n1,d1:");
        scanf("%d%d",&f1->n,&f1->d);
        printf("second fraction n2,d2:");
        scanf("%d%d",&f2->n,&f2->d);
}
void sum(struct Fraction f1,struct Fraction f2)
{
        int a,b,lcm,x;
        int temp1=0;
        int temp2=0;
        int ans=0;
        a=f1.d;
        b=f2.d;
        x=gcd(a,b);
        printf("The gcd of given num is %d\n",x);
        lcm=(f1.d*f2.d)/x;
        printf("The lcm of a num is %d\n",lcm);
        temp1=((f1.n*lcm)/f1.d);
        temp2=((f2.n*lcm)/f2.d);
        ans=(temp1+temp2);
        printf("sum of 2 fraction  num is %d/%d",ans,lcm);
}
int main()
{
        struct Fraction f1;
        struct Fraction f2;
        getdata(&f1,&f2);
        sum(f1,f2);
        return 0;
}
~
~
~
~
~
~
~
~
