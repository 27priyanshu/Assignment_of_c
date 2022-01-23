#include<stdio.h>

int main() {
    int a;
    float b;
    float p,q;
    
    printf("Enter your choice:\n"
    "choose 1 for sum\n"
    "choose 2 for subtraction\n"
    "choose 3 for multiplication\n"
    "choose 4 for division\n");
    scanf("%d",&a);
    printf("enter the value of p,q \n");
    scanf("%f %f",&p,&q);

    switch(a){
    case 1:
    printf("sum of two numbers:%f",p+q);
    break;

    case 2:
    printf("subtraction of two numbers:%f",p-q);
    break;

    case 3:
    printf("multiplication of two numbers:%f",p*q);
    break;

    case 4:
    printf("sum of two numbers:%f",p/q);
    break;


    }




    return 0;
}