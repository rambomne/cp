/******************************************************************************

Welcome to GDB Online
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<vector>
#include<iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,x;
    vector<int>v ;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
        
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
       cout<<v[i]<<" ";
       
    }
    return 0;
}
