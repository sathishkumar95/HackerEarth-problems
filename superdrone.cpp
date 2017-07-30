#include<bits/stdc++.h>
using namespace std;
#define INT_SIZE sizeof(int)
int count1=0,msb=0;
bool msb_check(int i)
{
    int temp=i;
  int ndx=0;
  while(1<i)
  {    ndx+=1;
      i=(i>>1);
     
  }
  
if(temp&(1<<ndx))
return true;

else 
return false;

}

bool numpal(int i)
{ int temp=i,remainder1=0,reversedInteger=0;

    while( i!=0 )
    {
        remainder1 = i%10;
        reversedInteger = reversedInteger*10 + remainder1;
        i /= 10;
    }
    if(temp==reversedInteger)
    return true;
    else 
    return false;
    
}

int solve (unsigned n) {
    
   for(int i=1;i<=n;i++){

    unsigned m = 0;

    for(unsigned tmp = i; tmp; tmp >>= 1)
        m = (m << 1) | (tmp & 1);

    if((m == i)&&numpal(i)&&msb_check(i)) 
    count1++;
   }
   // Write your code here
   return count1;
}

int main() {

  
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        unsigned n;
        cin >> n;
        count1 = 0;
        int out_=0;
        out_ = solve(n);
        cout << out_;
        cout << "\n";
    }
}