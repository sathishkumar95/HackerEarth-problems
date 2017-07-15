/*
PROBLEM
You are given a string S. Count the number of occurrences of all the digits in the string S.

Input: 
First line contains string S.

Output: 
For each digit starting from 0 to 9 print the count of their occurrences in the string S. So, print 10 lines, each line containing 
2 space separated integers. First integer i and second integer count of occurrence of i. See sample output for clarification.

Constraints: 1 ≤ |S| ≤ 100

*/

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
