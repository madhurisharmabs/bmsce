#include<stdio.h>
struct Fraction
{
        int n;
        int d;
}
void getdata()
{
        struct Fraction f1;
        struct Fraction f2;
        print("first fraction n1,d1",n/d);
        scanf("%d %d",f1.n,f1.d);
        printf("second fraction n2,d2",n/d);
        scanf("%d %d",f2.n,f2.d);

}
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

void add()
{

}
void putdata(sum)
{
        printf("The sum of two fraction number is %d",sum);

}
int main()
{
  struct f1,f2;
  int x,y;
  getdata();
  gcd(x,y);
  add();
  putdata();
}
~
~
~
~
~
