
// exam hall only girls allowed

#include<stdio.h>

void main(){

char g;

printf("\n enter the gender: like b or g\n");

scanf("%c",&g);

if(g=='b'){
    printf("\n boys are not allowed");
}
else if(g=='g'){
    printf("\n girls are allowed");
}

else{
    printf("\n enter b or g");
}

}
