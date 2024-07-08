#include<stdio.h>



void main(){

    //print
    printf("Hello");

    //next line
    printf("\n");

    //data types
    int a=5;
    char b='c';
    float c=1.0;
    double d=12.4;

    printf("%d %c %f %lf",a,b,c,d);

    //declaration and initialization
    int e;//declaration
    e=5;//initialization or assign

    //user input
    int f;//2000

    printf("\n user input:");

    scanf("%d",&f);

    printf("%d",f);

    //unary operator
    //increment
    int g=5;

    printf("\n post increment:");
    printf("%d",g++);

    g=5;
    printf("\n pre increment:");
    printf("%d",++g);

    //decrement
    int h=5;

    printf("\n post decrement:");
    printf("%d",h--);

    h=5;
    printf("\n pre decrement:");
    printf("%d",--h);

    // arithmetic operation
    int i=6;
    int j=3;
    printf("\n arithmetic");
    printf(" %d",i+j);
    printf(" %d",i-j);
    printf(" %d",i*j);
    printf(" %d",i/j);
    printf(" %d",i%j);

    //rational operator
    i=6;
    j=3;
    printf("\n rational");
    printf(" %d",i<j);
    printf(" %d",i>j);
    printf(" %d",i<=j);
    printf(" %d",i>=j);
    printf(" %d",i==j);
    printf(" %d",i!=j);

    //assignment operator
    i=6;
    printf("\n assignment");

    i+=1;
    printf(" %d",i);
    i=6;
    i-=1;
    printf(" %d",i);
    i=6;
    i*=1;
    printf(" %d",i);
    i/=1;
    printf(" %d",i);
    i=6;
    i%=1;
    printf(" %d",i);

    //logical operator
    int k=1;
    int l=3;
    int m=2;
    printf("\n logical");

    printf(" %d",k<l && m==2);
    printf(" %d",k<l || m==4);
    printf(" %d",!(k==2));

    //bitwise operator
    int n=2;
    int o=3;
    printf("\n bitwise");

    printf(" %d",n&o);
    printf(" %d",n|o);

    printf(" %d",n>>1);
    printf(" %d",o<<1);

    n=3;
    printf(" %d",~n);

    printf(" %d",n^o);

    //ternary operator or conditional operator
    int p=3,q=8,r=6;
    printf("\n ternary");
    printf(" %d",(p<q?q:p)<r?r:(p<q?q:p));


    //if else
    int s=5;

    printf("\n if else");
    if(s>5){
        printf("\n greater than 5");
    }
    else if(s<5){
        printf("\n lesser than 5");
    }
    else{
        printf("\n number is 5");
    }

    //array
    int t[]={1,2,3};

    printf("\n array");
    printf(" %d %d %d",t[0],t[1],t[2]);

    //string
    char u[]="hello world";

    printf("\n string");
    printf(" %s",u);

    //for loop
    int v[]={1,2,3,4,5};

    printf("\n for loop");
    for(int index=0;index<5;index++){
        printf(" %d",v[index]);
    }

    //while
    int index=0;

    printf("\n while loop");
    while(index<5){
        printf(" %d",v[index]);
        index++;
    }

    //do while
    int ind=0;

    printf("\n do while loop");
    do{
      printf(" %d",v[ind]);
      ind++;
    }while(ind<5);

    //switch
    printf("\n switch case");

    int w=1;

    switch(w){
      case 1:
         printf("\n first rank");
         break;
      case 2:
         printf("\n second rank");
         break;
      case 3:
         printf("\n third rank");
         break;
      default:
        printf("\n no rank");
    }

}
