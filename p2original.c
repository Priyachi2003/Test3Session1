#include<stdio.h>
struct _fraction
{
 int num,den;
};
typedef _fraction Fraction
 Fraction input_fraction();
{
  fraction a;
  printf("enter any number\n");
  scanf("%d",&a);
  return a;
}
Fraction Largest_fraction(Fraction f1, Fraction f2, Fraction f3)

{
  if(f1>f2 && f1>f3)
    return f1;
  else if(f2>f3)
    return f2;
  else
    return f3;
}
void output(Fraction f1, Fraction f2, Fraction f3, Fraction largest)
{
  if(largest==f1)
    printf("%d is smallest fraction\n",f1);
  else if(largest==f2)
    printf("%d is smallest fraction",f2);
  else
    printf("%d is smaleest fraction",f3);
}
int main()
{

  fraction f1,f2,f3,largest;
    f1=input_fraction();  
   f2=input_fraction();  
   f3=input_fraction();  
  largest_fraction(f1,f2,f3);
  output(f1,f2,f3,largest);
  return largest;
  
  
}


