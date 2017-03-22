#include<conio.h>
#include<stdio.h>
void main()
{
	int j = 0,i,n,a[100],k;
	clrscr();
	{
		scanf("%d",&n);
		for(i=1;i<=n;i++){
			if(n%i==0){
				a[j] = i;
				j++;
			}
			else{
			}
		}
		k = j;
		for(j=0;j<k;j++){
			printf("%d,",a[j]);
		}
	}
	getch();
}