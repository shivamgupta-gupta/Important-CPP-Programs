#include<conio.h>
#include<stdio.h>
void main()
{
	clrscr();
	int n,a;
	{
		scanf("%d",&n);
		while(n>0){
			a = n%10;
			printf("%d",a);
			n = n/10;
		}
	}
	getch();
}