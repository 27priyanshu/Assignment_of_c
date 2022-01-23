#include<stdio.h>

int main() {
    int Rohit,Ram,Anuj;
	printf("Enter the Ages of Rohit,Ram,Anuj");
	scanf("%d%d%d",&Rohit,&Ram,&Anuj);
	if(Ram<Anuj && Ram<Rohit)
	{
		printf("Ram is youngest");
	}
	if(Anuj<Ram && Anuj<Rohit)
	{
		printf("Anuj is youngest");
	}
	else if(Rohit<Ram && Rohit<Anuj)
	{
		printf("Rohit is youngest");
	}
    return 0;
}