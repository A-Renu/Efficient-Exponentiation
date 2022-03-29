//C program implementing the power
  //function for integer bases and integer powers
#include<stdio.h>
typedef long int type;

type pow_func(type base, type power)
{
    type result = 1;
    while(power>0)
    {
      if(power&1)//if power is odd
      {
        result = result*base;
      }
      base = base*base;
      power = power>>1;//Reduce the power
    }
    return result;
}
         
int main()
{
    type base, power, result;
    
    printf("Enter the base : ");
    scanf("%ld",&base);
    
    printf("Enter the power : ");
    scanf("%ld",&power);
    
    result = pow_func(base,power);
    printf("\nResult : %ld",result);
    return 0;
}
