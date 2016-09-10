#include<iostream.h>
#include<conio.h>
int main()
{
	int i,j,m,n,o,p,a[10][10],b[10][10],b[10][10];
	clrscr();
	cout<<"Enter row and column of matrix 1 - ";
	cin>>m>>n;
	cout<<"Enter row and column of matrix 2 - ";
	cin>>o>>p;
	if(m==o && n==p){
		cout<<"Enter elements of matrix 1 - ";
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		cout<<"Enter elements of matrix 2 - ";
		for(i=0;i<o;i++){
			for(j=0;j<p;j++){
				cin>>b[i][j];
			}
		}
		cout<<"Addition of matrices is - ";
		cout<<endl;
		for(i=0;i<m;i++){
			cout<<endl;
			for(j=0;j<n;j++){
				c[i][j] = a[i][j] + b[i][j];
				cout<<c[i][j]<<"\t";
			}
		}
	}
	getch();
	return 0;
}

/*

-------------  OUTPUT ---------------
Enter row and column of matrix 1 - 2 2
Enter row and column of matrix 1 - 2 2
Enter elements of matrix 1 - 1 2 3 4
Enter elements of matrix 2 - 1 2 3 4
Addition of matrices is - 

2       4
6       8

*/
