#include <bits/stdc++.h>
using namespace std;

int main()
{ char s[100];
int ar[10]={0};
cin>>s;
for(int i=0;s[i]!='\0';i++)
{

    ar[int(s[i])-48]++;
}
for(int i=0;i<10;i++)
{
    cout<<i<<" "<<ar[i]<<endl;
}
return 0;

}
