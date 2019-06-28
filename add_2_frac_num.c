#include<stdio.h>
struct Fraction
{
        int n;
        int d;
};

struct Fraction getdata(struct Fraction *f1,struct Fraction *f2);
int  gcd(int a,int b);
int sum(struct Fraction,struct Fraction f2,int *ans,int *lcm);
void putdata(int ans,struct Fraction f1,struct Fraction f2,int lcm);

int gcd(int a,int b)
{
        //int k=0;
        /*if(a>b)
          gcd(a-b,b);
        else if(b>a)
          gcd(a,b-a);
        else
           return a;*/
        if (b == 0)
           return a;
        else
           return gcd(b, a % b);
}
 struct Fraction  getdata(struct Fraction *f1,struct Fraction *f2)
{
        printf("first fraction n1,d1:");
        scanf("%d%d",&f1->n,&f1->d);
        printf("second fraction n2,d2:");
        scanf("%d%d",&f2->n,&f2->d);
        return *f1;
        return *f2;
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
//      printf("sum of 2 fraction  num is %d/%d",ans,lcm);
        return *ans;
}
void putdata(int ans,struct Fraction f1,struct Fraction f2,int lcm)
{
        printf("The sum of two num is %d/%d+%d/%d=%d/%d",f1.n,f1.d,f2.n,f2.d,ans,lcm);
}
int main()
"pro2.c" [unix] 67L, 1405C                                                          
