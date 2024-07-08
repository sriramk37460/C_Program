// arithmetic

#include<stdio.h>

void main(){
int a,b;
char g;

printf("\n enter two numbers: ");

scanf("%d %d",&a,&b);

scanf("%c",&g);
printf("\n enter the arithmetic operation: like + or - or * or /\n");

scanf("%c",&g);

if(g=='+'){
    printf("\n %d %c %d = %d",a,g,b,(a+b));
}
else if(g=='-'){
    printf("\n %d %c %d = %d",a,g,b,(a-b));
}
else if(g=='*'){
    printf("\n %d %c %d = %d",a,g,b,(a*b));
}
else if(g=='/'){
    printf("\n %d %c %d = %d",a,g,b,(a/b));
}
else{
    printf("\n this is not in arithmetic");
}

}


