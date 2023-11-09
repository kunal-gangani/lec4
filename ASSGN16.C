
#include<stdio.h>
#include<conio.h>
void main(){
	int a,b,c;
	clrscr();
	printf("Enter the value of A: ");
	scanf("%d",&a);
	printf("Enter the value of B: ");
	scanf("%d",&b);
	c=a+b;
	b=c-b;
	a=c-a;
	printf("\nThe value of A is: %d",a);
	printf("\nThe value of B is: %d",b);
	getch();
}