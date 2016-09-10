#include <iostream>

using namespace std;

int main()
{
    int first,second,next,i,n;
    cout<<"Enter number of terms you want in the fibbonaci Series - ";
    cin>>n;
    first = 0;
    second = 1;
    cout<<first<<" "<<second<<" ";
    for(i=0;i<n-2;i++){
        next = first + second;
        cout<<next<<" ";
        first = second;
        second = next;
    }
    return 0;
}


/*

Enter number of terms you want in the fibbonaci Series - 10
0 1 1 2 3 5 8 13 21 34

*/
