#include<stdio.h>
int input_side()
{
  int x;
  printf("enter the value of three sides\n");
  scanf("%d",&x);
  return x;
}
int check_scalene(int a,int b,int c)
{
  if(a!=b && a!=c && b!=c)
  {
    return 1;
  }
    else
   {
    return 0;
  }

}
void output(int a,int b,int c,int isscalene)
{
  if(isscalene ==1)
  {
    printf("it is a scalene triangle\n");
  }
  else
  {
  printf("it is not a scalene triangle\n");
  }
}
int main()
{
  int a,b,c,isscalene;
  a=input_side();
  b=input_side();
  c=input_side();
  isscalene=check_scalene(a,b,c);
  output(a,b,c,isscalene);
  return 0;
}