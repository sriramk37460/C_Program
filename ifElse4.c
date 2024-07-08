
// box - apple or orange or mango

#include<stdio.h>

void main(){

char g;

printf("\n enter the fruit name: like apple or orange or mango\n");

scanf("%c",&g);

if(g=='a'){
    printf("\n apple is 1st box");
}
else if(g=='o'){
    printf("\n orange is 2nd box");
}
else if(g=='m'){
    printf("\n mango is 3rd box");
}
else{
    printf("\n this is not in box");
}

}
