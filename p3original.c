#include<stdio.h>
void input_n_and_r(int *n, int *r)
{
  printf("enter the values of n and r\n");
  scanf("%d%d",n,r);
}
int ncr(int n, int r)
{
  long a=1,b=1,c=1,d;
  
  for (int i=1;i<=n;i++)
    {
      a=a*i;
    }
  for (int i=1;i<=(n-r);i++)
    {
      b=b*i;
    }
  for (int i=1;i<=r;i++)
    {
      c=c*i;
    }
  d=a/(c*b);
  return d;
}
void output(int n, int r, int result)
{
  printf("the value of %d.c.%d  is %d",n,r,result);
}
int main()
{
  int n,r;
  long c;
  input_n_and_r(&n,&r);
  c=ncr(n,r);
  output(n,r,c);
  return 0;
}
