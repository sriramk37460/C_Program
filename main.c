#include<stdio.h>
#include<stdlib.h>

int main()
{
    int j=2;
    int i,value;
    scanf("%d",&value);
    for(i=0;i<30;i++)
    {
        if((i%j)!=0)
        {
            printf("\n %d",value);
        }
        else
        {

            printf("%d",value);
        }
    }

}
