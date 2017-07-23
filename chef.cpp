#include <iostream>
using namespace std;
int push(int[],int,int);
int pop(int[],int);
int push(int pile[],int top,int ele)
{
    pile[++top]=ele;

return top;
}

int pop(int pile[],int top)
{
    if(top==-1)
        cout<<"\nNo Food";
    else
    {
        cout<<"\n"<<pile[top];
        top--;
    }
    return top;
}

int main()
{
    short int t;
    cin>>t;
    int pile[t];
    int t1[t],t2[t];
    int top=-1;
    for(int i=0; i<t; i++)
    {
        cin>>t1[i];
        if(t1[i]==2)
        {
            cin>>t2[i];

        }
    }

    for(int i=0; i<t; i++)
    {
        if(t1[i]==1)
        {
            top=pop(pile,top);
        }
        if(t1[i]==2)
        {
            top=push(pile,top,t2[i]);
        }
    }




    return 0;
}
