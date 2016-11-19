#include <iostream>

using namespace std;

void merge(int a[],int ,int ,int );
void merge_sort(int a[],int ,int );

int main()
{
    int i,n,a[10];
    cout <<"Enter number number of terms - ";
    cin>>n;
    cout<<"Enter terms - ";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    merge_sort(a,0,n-1);
    cout<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
void merge_sort(int a[],int beg,int end){
    int mid;
    if(beg<end){
    mid = (beg + end)/2;
    merge_sort(a,beg,mid);
    merge_sort(a,mid+1,end);
    merge(a,beg,mid,end);
    }
}
void merge(int a[],int beg,int mid,int end){
    int i=beg,temp[10];
    int j=mid+1;
    int index = beg;
    while(i<=mid && j<=end){
        if(a[i]<a[j]){
            temp[index] = a[i];
            i++;
        }
        else{
            temp[index] = a[j];
            j++;
        }
        index++;
    }
    if(i>mid){
        while(j<=end){
            temp[index] = a[j];
            j++;index++;
        }
    }
    else{
        while(i<=mid){
            temp[index] = a[i];
            i++;index++;
        }
    }
    int k = beg;
    while(k<index){
        a[k] = temp[k];
        k++;
    }
}
