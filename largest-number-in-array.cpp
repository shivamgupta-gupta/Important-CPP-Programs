#include<iostream.h>

int main()
{
    int a[20],i,n;
	cout<<"Enter number of elements - ";
	cin>>n;
	cout<<"Enter the elements - ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int large = a[0];
	for(i=0;i<n;i++)
	{
		if(large<a[i])
		{
			large = a[i];
		}
	}
	cout<<"Largest number is - "<<large;
	return 0;
}

/*

---------  OUTPUT  --------

Enter number of elements - 5
Enter the elements - 12 9 13 6 4
Largest number is - 13

*/
