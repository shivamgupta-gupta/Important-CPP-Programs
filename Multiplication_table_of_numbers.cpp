#include <iostream>

using namespace std;

int main()
{
    int i,n,y=1;
    cout <<"Enter number - ";
    cin>>n;
    for(i=n;i<=n*10;i=i+n){
        cout<<n<<" X "<<y<<" = "<<i<<"\n";
        y++;
    }
    return 0;
}


/* 

Output

Enter number - 46
46 X 1 = 46
46 X 2 = 92
46 X 3 = 138
46 X 4 = 184
46 X 5 = 230
46 X 6 = 276
46 X 7 = 322
46 X 8 = 368
46 X 9 = 414
46 X 10 = 460

*/
