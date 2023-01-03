#include <bits/stdc++.h>
using namespace std;

string decToBin(int n)
{  
    string s,v;
   

   
    int a;
  while(n)
  { 
    a=n&1;
    v=to_string(a); 
    s=s.append(v);

    n=n>>1;
  }
   s+='0';
  reverse(s.begin(), s.end());
 
  return s;
}
/*int binTodec(int n)
{ 
    int r=0,b,a,i=0;
    while(n)
    {
        a=n%10;
        r=r+(a*pow(2,i));
        n=n/10;
        i++;


    }
    return r;
}
*/
int binTodecf(string n)
{ 
    int r=0,b,a,i=0,j;
    int l=n.length();
 for(j=l-1;j>=0;j--)
 {
    b=n[j]-'0';
    r=r+(b*pow(2,i));
        
        i++;
 }

    
    return r;
}


/*string dec_to_bin(int n) {
    string ret = "";
    for (int i = 31; i >= 0; i--) {
        int k = 1 << i;
        ret += (n & k)? '1' : '0';
    }
    return ret;
}*/

int main()
{
    int t,i=1;
    cin>>t;
    while(t)
    { int n;
    cin>>n;
    
    string b;
    b= decToBin(n);
   // b=dec_to_bin(7);
    
  //  cout<<b<<endl;      
    next_permutation(b.begin(), b.end());
   // int res=stoi(b);
    int z=binTodecf(b);
     //cout<<z<<endl;
     cout<<"Case "<<i<< ": "<<z<<endl;
        i++;
        t=t-1;

     }


    return 0;

}