#include <stdio.h>
#include<stdlib.h>
int main()
{
    char str[100];
    int i,length;
    printf("Enter a string: \n");
    scanf("%s",str);
    sscanf(str,"%d",&length);
    i=atoi(str);
    printf("\ninput string: %d %d",i,length);
    return 0;
}
