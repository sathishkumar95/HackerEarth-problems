#include <iostream>
using namespace std;

int main()
{  int n,pos=0;
long int m;
   cin>>n>>m;
   long int ar[n];
   for(int i=1;i<=n;i++)
    cin>>ar[i];

    for(int i=1;i<=n;i++)
    {
    	if(ar[i]==m)
    	  pos=i;
    }
    cout<<pos;
    return 0;
}
