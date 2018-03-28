#include<stdio.h>
#include<conio.h>
void main()
{
char a[100],c,ch;
int i=0,j;
clrscr();
	printf("Enter password(Please enter spacebar at end\n");
	while(ch!=' ')
	{
		ch=getch();
		a[i]=ch;
		c='*';
		printf("%c",c);
		i++;
	}
	printf("\nYour password is: ");
	for(j=0;j<=i;j++)
	{
		printf("%c",a[j]);
	}
	getch();
}