#include<stdio.h>
struct _fraction
{
int num,den;
};
typedef struct _fraction Fraction;

Fraction input_fraction()
{
Fraction f;
  printf("enter the number\n");
  scanf("%d %d",&f.num,f.den);
 }
Fraction smallest_fraction(Fraction f1, Fraction f2, Fraction f3)
{
  Fraction x=den1,den2,den3;
 Fraction num1=num1(x/den1);
  Fraction num2=num2(x/den2);
  Fraction num3=num3(x/den3);
  if(num1<num2 && num1<num3)
    return num1;
  else if(num2<num3)
    return num2;
  else
    return num3;
  }
void output(Fraction f1, Fraction f2, Fraction f3, Fraction smallest)
Fraction num1,num2;
{if(smallest==num1)
  printf("%d is smallest fraction\n",f1);
else if(smallest==num2)
  printf("%d is smallest fraction\n",f2);
else
  printf("%d is smallest fraction\n",f3);
  }
int main()
{
  Fraction num,den,smallest,f1,f2,f3;
  num=input_fraction();
  den=input_fraction();
  smallest=smallest_fraction();
  output(f1,f2,f3);
  return smallest;
  
}