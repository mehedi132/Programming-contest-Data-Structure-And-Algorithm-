#include <bits/stdc++.h>
using namespace std;

 #define COW(n,c) {    \
 c=0;\
  while(n)\
  {\
       if(n&1)\
        {\
            c ++;\
        }\
        n=n>>1;\
  }\
 }


int cou(int n) 
{ int c=0;
while(n)
  {
       if(n&1)
        {
            c ++;
        }
        n=n>>1;
  }
  return c;
     
}

int main()
{
    int t,n,a=0,b,i=1,k,count;
    cin>>t;
    while(t)
    {
        cin >>n;
         k=n;
        COW(k,a);
        cout<<"a="<<a<<endl;
       // a=cou(n);
        b=0;
        while(a!=b)
        {
            n++;
            //cout<<"N="<<n<<endl;
            k=n;
             COW(k,b);
           // b=cou(n);

        }
        cout<<"b="<<b<<endl;
        cout<<"Case "<<i<< ": "<<n<<endl;
        i++;
        t=t-1;


    }
    return 0;
}