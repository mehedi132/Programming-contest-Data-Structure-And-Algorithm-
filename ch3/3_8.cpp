#include<iostream>
using namespace std;
int M=1000000007;  //nth power of a base with big mod
int power(int a, int b, int m)
{ int x,y,z;
    if(b==0)
    {
        return 1 ;
    }
     
   x=power(a,b/2,m);     
   x= (x % m  * x % m ) % m ;

   if(b&1)
{
    z=x % m;
   x=(z * a  ) % m ;
}
 cout<<" final x= "<<x<<endl;
   return x;
}

int main()
{int a,b,res;
int M=1000000007;

cin>>a>>b;
res=power(a,b,M);

cout<<res;
    return 0;
}