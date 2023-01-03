#include<bits/stdc++.h>
using namespace std;
int prime[300000],nprime;
int mark[1000002];

void sieve(int n)
{
    int i,j,limit= sqrt(n*1)+2;
    cout<<"li="<<limit<<endl;
    mark[1]=1;
    for (i=4;i<=n;i+=2)
    {
        mark[i]=1;     //from mahbubul hasan
    }
    prime[nprime++]=2;
       cout<<"prime from function ";
    for (i=3;i<=n;i+=2)
    { 
        if(!mark[i])
        {
             prime[nprime++]=i;
             cout<<i<<" ";
             if(i<=limit)
             {
                for (j=i*i;j<=n;j+=i*2)
                {
                       mark[j]=1;
                }

             }
        }

    }

}

int main()
{
    int ar[1000]={1};
    int primeNumber[10000]={0};
    primeNumber[0]=2;
    int n,l;
    cin>>n; //n= nth prime number
    int m=n*n;
    l=sqrt(m+1);
     
    ar[0]=0;
    ar[1]=0;
    
    for (int i=2;i<=m;i++)
    {
        ar[i]=i;
    }
   
    

    for (int i=2;i<=l;i++)
    {
        for (int j=i+1;j<=m;j++)
       {
         if(j%i==0)
         {
           ar[j]=0;
           
         }
        }
        
    }
    int k=0;
    
    for (int i=0;i<=m;i++)
    {
        if(ar[i]!=0)
        { primeNumber[k]=ar[i];
        k++;
            cout<<ar[i]<<" ";
        }
    }
    cout<<endl;
   sieve(m);
   cout<<endl<<"Seive "<<prime[n-1]<<endl;
   cout<<primeNumber[n-1]<<endl;

 
    return 0;
}
