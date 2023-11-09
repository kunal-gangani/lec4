#include<stdio.h>
#include<conio.h>
void main(){
	clrscr();
	int x,y,z;
	printf("Enter the value of X: ");
	scanf("%d",&x);
	printf("Enter the value of Y: ");
	scanf("%d",&y);
	z=(x-y)*2;
	printf("The Final value is: %d",z);
	getch();
}