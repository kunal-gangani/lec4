#include<stdio.h>
#include<conio.h>
void main(){
	clrscr();
	int x,y,z;
	printf("Enter the value of X: ");
	scanf("%d",&x);
	printf("Enter the value of Y: ");
	scanf("%d",&y);
	z=(x/y)*5;
	printf("The Value is: %d",z);
	getch();
}