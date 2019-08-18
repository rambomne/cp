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
    int n,x,a,b,m;
    vector<int>v ;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
        
    }
    cin>>m;
    cin>>a>>b;
    v.erase(v.begin()+m-1);
    for(int i=0;i<n-1;i++)
    {
       cout<<v[i]<<" ";
       
    }
    cout<<"\n";
    v.erase(v.begin()+a-1,v.begin()+b-1);
    for(int i=0;i<n-b+a-1;i++)
    {
       cout<<v[i]<<" ";
       
    }
     
       
   
    
}



