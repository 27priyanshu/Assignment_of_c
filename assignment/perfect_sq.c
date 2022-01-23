/*C program to check number is perfect square or not.*/
 
#include <stdio.h>
#include <math.h>
 
int main()
{
    int num;
    int var;
    float fvar;
  
    printf("Enter an integer number: ");
    scanf("%d",&num);
  
    var=sqrt(num);
    fvar=var;
 
    if(var==fvar)
        printf("%d is a perfect square.\n",num);
    if(var==fvar)
        printf("%d is a square root",var);
    else
        printf("%d is not a perfect square.",num);
      
    return 0;
}
