#include <bits/stdc++.h>
using namespace std;
int highest(int count[6])
{
   int maxi=count[0],pos=0;
    for(int i=1;i<=5;i++)
    {
        if(maxi<count[i])
        {maxi= count[i];
        pos=i;
            
        }
        
    }
    return pos;
}
int main()
{
    int t=0,n=0,count[6]={0};
   cin>>t;
   int ar[10000]={0};
   while(t--)
   {   cin>>n;
       for(int i=0;i<n;i++)
       cin>>ar[i];
       for (int i=0;i<n;i++)
       {
           for(int j=0;j<=5;j++)
           {
               if(ar[i]&(1<<j))
               {
                   count[j]++;
               }
           }
           
       }
       
       cout<<highest(count)<<endl;
   }
    return 0;
}
