
#include <stdio.h>
#include<vector>
#include<iostream>
#include <algorithm>
#include<set>
using namespace std;
int main() {
    int q;
    cin>>q;
    set < int> s;
    for(int i=0;i<q;i++)
    {
        int y;
         int x;
        cin>>y>>x;
        if(y==1)
            s.insert(x);
        else if(y==2)
            s.erase(x);
        else
        {
            set<int>::iterator itr=s.find(x);
            if(itr==s.end()){cout<<"no";}
            else{cout<<"yes";}
        }
    }
    return 0;
}



