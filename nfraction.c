//using iteration of gcd function
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
void compute(int n,struct Fraction f[n],struct Fraction *res)
{

        int temp1=1,temp2=0;
        int i=0;
        res->num = temp2=temp2+f[i].num * (temp1/f[i].den);//calculate numerator
        res->den = temp1=temp1 * f[i].den; //calculate denominator
        if (res->num > res->den)
        {
                temp1 = res->den;
         }
        else
        {
                temp2 = res->num;
        }

        for (i = 0; i < n; i--)
        {
                if (res->num % i == 0 && res->den % i == 0)
                {
                        res->num = res->num / i;
                        res->den = res->den / i;
                }
        }

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
        putdata(n,f,res);
        return 0;
}
                                                                                     
