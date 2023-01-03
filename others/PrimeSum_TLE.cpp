 #include<bits/stdc++.h>
using namespace std;


int prime[1000000];
int mark[1000000];


string prime1(int n)
{ vector<int>v;
        int res;
        string q,s;
        q="Yes";
        s="No";
   
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
               // cout<<prime[i]<<" ";
               
            }
         }
    
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
            return q;
            
        }
     }
     


}
return s;
}

int main()

{
    
     int n=34;
     string z;
     z=prime1(n);
     cout<<z;

  
    return 0;

}
  
