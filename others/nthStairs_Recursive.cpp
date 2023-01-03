#include <bits/stdc++.h> 
using namespace std;
int arr[100009];
int m=1000000007;
int countDistinctWays(int nStairs) {
    if(arr[nStairs])
    {
        return arr[nStairs];
    }
    if(nStairs==1 || nStairs==2 )
    {
        return nStairs;
    }
    if(nStairs==0)
    {
        return 1;
    }
    arr[nStairs]=(countDistinctWays(nStairs-1)%m +countDistinctWays(nStairs-2)%m)%m;
    return arr[nStairs];
}
int main()
{  int n,r;
    
    cin>>n;
   r= countDistinctWays(n);
   cout<<r;

    return 0;
}