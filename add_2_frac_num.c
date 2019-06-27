#include<stdio.h>
struct Fraction
{
        int n;
        int d;
};
int gcd(int a,int b)
{#include<stdio.h>
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
        //return 0;
}
void getdata(struct Fraction *f1,struct Fraction *f2)
{
        printf("first fraction n1,d1:");
        scanf("%d%d",&f1->n,&f1->d);
        printf("second fraction n2,d2:");
        scanf("%d%d",&f2->n,&f2->d);
}
int sum(struct Fraction f1,struct Fraction f2)
{
        int a,b,lcm,x;
        int temp1,temp2;
        int res;
        a=f1.d;
        b=f2.d;
        x=gcd(a,b);
        printf("The gcd of given num is %d\n",x);
        lcm=(f1.d*f2.d)/x;
        printf("The lcm of a num is %d\n",lcm);
        temp1=((f1.n/f1.d)*lcm);
        temp2=((f2.n/f2.d)*lcm);
        res=temp1+temp2;
        int ans=(res/lcm);

        return ans;
}
void putdata(int ans)
{
        //int n1,n2;
        printf("The sum of two fraction number is %d/%d",ans);

}
int main()
{
        struct Fraction f1;
        struct Fraction f2;
        int ans=0;
        //int n1=0;
        //int n2=0;
        getdata(&f1,&f2);
        sum(f1,f2);
                                                                                            
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
        //printf("The first and second fraction are %d/%d,%d/%d num :\n",f1->n,f1->d,f2->n,f2->d);

}
int sum(struct Fraction f1,struct Fraction f2)
{
        int a,b,lcm,x;
        a=f1->d;
        b=f2->d;
        int ans=0;

        x=gcd(a,b);
        printf("The gcd of given num is %d\n",x);
        lcm=(f1->d*f2->d)/x;
        printf("The lcm of a num is %d\n",lcm);
        ans=((f1->n*lcm)/f1->d)+((f2->n*lcm)/f2->d);

        return ans;

}

void putdata(int ans)
{
        struct Fraction f1,f2;
        printf("The sum of two fraction number %d/%d+%d/%d is %d/%d\n",f1.n,f1.d,f2.n,f2.d,ans);

}
int main()
{
        struct Fraction f1;
        struct Fraction f2;
        int ans=0;
        getdata(&f1,&f2);
        sum(f1,f2);
        putdata(ans);
        return 0;
}
