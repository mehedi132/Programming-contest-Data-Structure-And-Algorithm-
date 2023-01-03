#include<bits/stdc++.h>
using namespace std;
int prime[1000000];
int mark[1000000];


void prime1(int n)
{
   
         prime[2]=2;
   int sq=sqrt(n+1);
        int i,j=0;
        for(i=4;i<=n;i+=2)
        {
            mark[i]=1;
        }
        for(i=3;i<=n;i=i+2)
        {
            if(!mark[i])
            {
                prime[i]=i;
                 
               
                if(i<=sq)
                {
                   for(j=i*i;j<=n;j=j+2*i)
                 {
                     mark[j]=1;

                 }
                     
                }
               
                
            }
        }
         for(i=1;i<=n;i++)
         {
            if(prime[i])
            {
                cout<<prime[i]<<" ";
               
            }
         }


}

int main()

{
    
     int n=31;
int res;
vector<int>v;
  prime1(n);
 
  int  i=2,j=2;

//cout<<"Size:"<<c<<endl;

for(i=2;i<=n;i++)
{
     if(prime[i])
     {
        v.push_back(prime[i]);
     }
}
int k=0;

for(i=0;i<v.size();i++)
{
     res=n-v[i];
     for(j=0;j<v.size();j++)
     {
             if(res==v[j])
        {
            cout<<"YES"<<endl;
            k++;
            break;
        }
     }
     if(k>0)
     {
        
        break;
     }
}
if(k==0)
{
    cout<<"NO";
}


  /*while(prime[i])
  {
     res=n-i;
     while(prime[j])

     {
         if(res==j)
        {
            cout<<"YES"<<endl;
            break;
        }
        j++;
     }
     i++;        
     
  }*/
    return 0;

}
    
