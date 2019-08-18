/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <deque>
#include <iostream>
#include <algorithm>
using namespace std;
void maxk(int arr[], int n, int k)
{
    deque<int> dq;
    for (int i=0; i<n; i++)
    {
        if (dq.empty())
            dq.push_back(i);
       if (dq.front() <= (i - k))
            dq.pop_front();
       while (!dq.empty() && arr[i] >= arr[dq.back()])
        {dq.pop_back();}
        dq.push_back(i);
       if (i >= (k - 1))
            cout << arr[dq.front()] << " ";
    }
    cout << endl;
}
int main()
{
    int t;
	cin >> t;
	for(;t>0;t--)
	{
	int n,k;
    cin >> n >> k;
    int i;
    int arr[n];
    for(i=0;i<n;i++)
    {cin >> arr[i];}
    maxk(arr, n, k);
    }
  	return 0;
}