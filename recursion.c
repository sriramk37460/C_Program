#include<stdio.h>
int fun(int number)
{
    if(number==1)
        return 1;
    else
        return 1+fun(number-1);
}
int main()
{
 int number=10;
 int recursion=fun(number); 
 printf("%d",recursion);
 return 0;
}