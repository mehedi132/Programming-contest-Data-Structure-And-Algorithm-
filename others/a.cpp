#include <iostream>
#include <cmath>
using namespace  std;



int main()
{
    int t;
     int n,r,m=1000000007,j;
    //double n,r,m=1000000007,j;
  

    cin>>t;
    while(t)
    {
        cin>>n;
        if(n&1)
        {
            r=(n/2);
            r++;
        }
        else{
            r=(n/2);
        }
        //r=ceil(n>>1);
       // j= n%m;
      // j= fmod(n,m);
      // cout<<j<<endl;

      //  r=ceil(n/2);
       

       cout<<r<<endl;
       t--;

    }
    return 0;
}