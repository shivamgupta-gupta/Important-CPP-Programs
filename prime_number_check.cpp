#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,i,flag=0;
    cout<<"Enter number - ";
    cin>>n;
    if(n<=1){
        cout<<n<<" is neither prime nor composite number.";
    }
    else{
        for(i=2;i<=sqrt(n);i++){
            if(n%i==0){
                flag = 1;
                break;
            }
        }
        if(flag==1){
            cout<<n<<" is not a prime number.";
        }
        if(flag==0){
            cout<<n<<" is a prime number.";
        }
    }
    return 0;
}

/*

----------  OUTPUT  ---------------

Enter number - 47
47 is a prime number.

*/
