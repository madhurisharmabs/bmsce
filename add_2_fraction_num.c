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
        else
        {
         return a;
        }

}
void getdata(struct Fraction *f1,struct Fraction *f2)
{
        printf("first fraction n1,d1:");
        scanf("%d%d",&f1->n,&f1->d);
        printf("second fraction n2,d2:");
        scanf("%d%d",&f2->n,&f2->d);
}
int sum(struct Fraction f1,struct Fraction f2,struct Fraction *res,int lcm)
{
        int a=f1.d;
        int b=f2.d;
        int gcdres=gcd(a,b);
        printf("The gcd of a  given num is: %d\n",gcdres);
        lcm=(f1.d*f2.d)/gcdres;
        printf("The lcm of a given num is: %d\n",lcm);
        res->n=((f1.n*lcm)/f1.d)+((f2.n*lcm)/f2.d);
        res->d=(f1.d*f2.d)/gcdres;

        return 0;
}
void putdata(struct Fraction f1,struct Fraction f2,struct Fraction *res)
{
        printf("The sum of two  fraction num is %d/%d+%d/%d=%d/%d",f1.n,f1.d,f2.n,f2.d,res->n,res->d);
}
int main()
{
        struct Fraction f1;
        struct Fraction f2;
        struct Fraction res;
        int lcm=0;
        getdata(&f1,&f2);
        sum(f1,f2,&res,lcm);
        putdata(f1,f2,&res);
        return 0;
-- INSERT --                                                   
