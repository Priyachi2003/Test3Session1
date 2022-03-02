#include<stdio.h>
void input(int *num1, int *den1, int *num2, int *den2)
{
  printf("enter four numbers\n");
  scanf("%d %d %d %d",num1,den1,num2,den2);
}
void add(int num1,int den1, int num2, int den2, int *num3, int *den3)
{
  int i;
  
  *num3=(num1*den2)+(den1*num2);
  *den3=(den1*den2);
  for(i==1;i<=num3 && i<=den3;i++)
    {
      if((*num3)%i==0 && (*den3)%i==0);
        int gcd_no=i;
    }
}
void output(int num1, int den1, int num2, int den2, int num3, int den3)
{
  printf("sum of fractions of %d/%d,%d/%d i= %d /%d",num1,den1,num2,den2,num3,den3);
}
int main()
{
  int num1,den1,num2,den2,num3,den3;
  input(&num1,&den1,&num2,&den2);
  add(num1,den1,num2,den2,&num3,&den3);
  output(num1,  den1, num2, den2, num3, den3);
return 0;
}

