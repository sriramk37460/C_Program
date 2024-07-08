
// big number

#include<stdio.h>

void main(){

int a,b;

printf("\n enter two numbers: ");

scanf("%d %d",&a,&b);

if(a>b){
    printf("\n biggest number is: %d",a);
}
else if(a<b){
    printf("\n biggest number is: %d",b);
}
else{
    printf("\n both are equal");
}

}
