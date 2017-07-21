#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{   int ar[10],n;
cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
    }
    int temp;
    for(int i=1; i<=n; i++)
    {

        for(int j=i; j<=n; j++)
        {
            if(ar[i]>ar[j])
            {

                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }

for(int i=1;i<=n;i++)
    cout<<ar[i]<<endl;
return 0;

}
