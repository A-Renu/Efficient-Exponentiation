//C program implementing the power function for
    //integer bases and real powers
#include<stdio.h>
#include<math.h>
typedef float type;

type pow_func(type base, type power)
{
    type x, term;
    type result=1.0;
    int n=1;
    x = power*log(base);
    term = x;
    while(fabs(term)>0.00001)
    {
        result = (float)result+((float)term/n);
        term = (float)term*x/n;
        n++;
    }
    return result;
}

int main()
{
    type base, power;
    
    printf("Enter the base : ");
    scanf("%f",&base);
    
    printf("Enter the power : ");
    scanf("%f",&power);
  
    printf("\nResult : %f",pow_func(base,power));
    return 0;   
}
