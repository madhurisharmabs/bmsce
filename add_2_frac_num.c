#include<stdio.h>
struct Fraction
{
        int n;
        int d;
};

int gcd(int a,int b)
{
        if(a>b)
        {
         gcd(a-b,b);
        }
        else if(b>a)
        {
          gcd(a,b-a);
        }
        return a;
}
void getdata(struct Fraction *f1,struct Fraction *f2)
{
        printf("first fraction n1,d1:");
        scanf("%d%d",&f1->n,&f1->d);
        printf("second fraction n2,d2:");
        scanf("%d%d",&f2->n,&f2->d);
}
int sum(struct Fraction f1,struct Fraction f2,struct Fraction res)
{
        int a,b;
        int x;
        a=f1.d;
        b=f2.d;
        x=gcd(a,b);
        printf("The gcd of a  given num is: %d\n",x);
        int lcm=0;
        lcm=(f1.d * f2.d)/x;
        printf("The lcm of a given num is: %d\n",lcm);
        res.n=((f1.n * lcm)/f1.d)+((f2.n * lcm)/f2.d);
        res.d=(f1.d * f2.d)/x;
        return 0;
}
void putdata(struct Fraction f1,struct Fraction f2,struct Fraction res,int lcm)
{
        printf("The sum of two  fraction num is %d/%d+%d/%d=%d/%d",f1.n,f1.d,f2.n,f2.d,res,lcm);
}
int main()
{
        struct Fraction f1;
        struct Fraction f2;
        struct Fraction res;
        int lcm=0;
        getdata(&f1,&f2);
        sum(f1,f2,res);
        putdata(f1,f2,res,lcm);
        return 0;
}

"pro2.c" [unix] 57L, 1021C                                                                     
