#include<stdio.h>
struct Fraction
{
        int n;
        int d;
};
void getdata(struct Fraction *f1,struct Fraction *f2);
int  gcd(int a,int b);
int sum(struct Fraction,struct Fraction f2,int *ans,int *lcm);
void putdata(int ans,struct Fraction f1,struct Fraction f2,int lcm);

int gcd(int a,int b)
{       if (b == 0)
           return a;
        else
           return gcd(b, a % b);
}
void getdata(struct Fraction *f1,struct Fraction *f2)
{
        printf("first fraction n1,d1:");
        scanf("%d%d",&f1->n,&f1->d);
        printf("second fraction n2,d2:");
        scanf("%d%d",&f2->n,&f2->d);
}
int sum(struct Fraction f1,struct Fraction f2,int *ans,int *lcm)
{
        int a,b,x;
        int temp1=0;
        int temp2=0;
        a=f1.d;
        b=f2.d;
        x=gcd(a,b);
        printf("The gcd of given num is %d\n",x);
        *lcm=(f1.d*f2.d)/x;
        printf("The lcm of a num is %d\n",*lcm);
        temp1=(((f1.n)* *lcm)/f1.d);
        temp2=(((f2.n)* *lcm)/f2.d);
        *ans=(temp1+temp2);
        return *ans;
}
void putdata(int ans,struct Fraction f1,struct Fraction f2,int lcm)
{
        printf("The sum of two num is %d/%d+%d/%d=%d/%d",f1.n,f1.d,f2.n,f2.d,ans,lcm);
}
int main()
{
        struct Fraction f1;
        struct Fraction f2;
        int ans=0;
        int lcm=0;
        getdata(&f1,&f2);
        sum(f1,f2,&ans,&lcm);
        putdata(ans,f1,f2,lcm);
        return 0;
}
~
~
"pro2.c" [unix] 55L, 1210C                                   
