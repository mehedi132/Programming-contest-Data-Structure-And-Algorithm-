//#include <bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int k, n,res;
    string k1;
   
    cin>>n;
    cin>>k1;
     k=k1.size();
    
   
   
   

    

    res=n;
    if(n>k && n%k !=0)
    { for(int i=1;i<n;i++)
        {
            if((n-i*k)>k)
            {
            res=res*(n-i*k);
            }
         
       }
        res= res* (n%k);

    }
    else {
        for(int i=1;i<n;i++)
        {
            if((n-i*k)>k)
            {
            res=res*(n-i*k);
            }
         
       }
        res= res* k;
        if(n<=k)
        {
            res=n;

        }

    }
    cout<<res;

    
    return 0;
}