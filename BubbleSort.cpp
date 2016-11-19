#include <iostream>

using namespace std;
void bubble_sort(int a[],int n);

int main()
{
    int a[10],i,n,j,temp;
    cout << "Enter number of terms - ";
    cin>>n;
    cout<<"Enter terms - ";
    for(i = 0;i<n;i++){
        cin>>a[i];
    }
    bubble_sort(a,n);
    cout<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
void bubble_sort(int a[],int n){
    int temp,j,i;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

