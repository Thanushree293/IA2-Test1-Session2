#include<stdio.h>
int input()
{
  int x;
  printf("enter the x value\n");
  scanf("%d",&x);
  return x;
}
int gcd(int a,int b,int gcd)
{
  for(int i=1;i<=a && i<=b ;i++)
  {
    if(a%i==0 && b%i==0)
    {
      gcd=i;
    }
  }
  return gcd;
}
void output(int a,int b,int gcd)
{
  printf("gcd of %d,%d is %d",a,b,gcd);
}

int main()
{
  int a,b,c;
  a=input();
  b=input();
  c=gcd(a,b,c);
  output(a,b,c);
  return 0;
}