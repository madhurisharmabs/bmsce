//using iteration of gcd function in sum function
#include<stdio.h>
struct Fraction
{
        int n;
        int d;
};
void getdata(struct Fraction *f1,struct Fraction *f2)
{
        printf("first fraction n1,d1:");
        scanf("%d%d",&f1->n,&f1->d);
        printf("second fraction n2,d2:");
        scanf("%d%d",&f2->n,&f2->d);
}
int sum(struct Fraction f1,struct Fraction f2,struct Fraction *res)
{
        int temp=0;
        int i;
        res->n = (f1.n * f2.d) + (f2.n * f1.d);//calculate numerator
        res->d= (f1.d * f2.d);//calculate denominator
        if (res->n > res->d) {
                temp = res->d;
        } else {
                temp = res->n;
        }

        for (i = temp; i > 0; i--) {
                if (res->n % i == 0 && res->d % i == 0) {
                        res->n = res->n / i;
                        res->d = res->d / i;
                }
        }
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
        getdata(&f1,&f2);
        sum(f1,f2,&res);
        putdata(f1,f2,&res);
        return 0;
}

"pro2.c" [unix] 57L, 1021C                                                                     
