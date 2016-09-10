#include<iostream.h>
#include<conio.h>
int main()
{
	int fact=1,i,n;
	clrscr();
	cout<<"Enter number - ";
	cin>>n;
	for(i=n;i>1;i--){
		fact = fact*i;
	}
	cout<<"Factorial of "<<n<<" is - "<<fact;
	getch();
	return 0;
}

/*

---------  OUTPUT  ---------

Enter number - 5
Factorial of 5 is - 120


*/
