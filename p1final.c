#include<stdio.h>
void input(float *base,float *height)
{
  printf("enter the value of base and height\n");
  scanf("%f %f",base,height);
}
void find_area(float base,float height,float *area)
{
  *area=(base*height)/2;
}
void output(float base,float height,float area)
{
  printf("area of triangle (%f*%f)/2 is %f\n",base,height,area);
}
int main()
{
  float a,b,c;
  input(&a,&b);
  find_area(a,b,&c);
  output(a,b,c);
  return 0;
}