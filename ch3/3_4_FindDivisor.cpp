#include <bits/stdc++.h>
using namespace std;
vector<int> divisor[1000002];
void findDivisor(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
         for(j=i;j<=n;j+=i)
    {
      divisor[j].push_back(i); // j means which number and i mean the divisors are
     
    }

    }
}

int main()
{
  int n;
  cout<<"Entter number to find divisor: ";
  cin>>n;
findDivisor(n);


for(int i=1;i<=n;i++)
{
  cout<<"\nDivisor of "<<i<<" are ";
  for(int j  =0;j<divisor[i].size();j++)
  {
cout<<divisor[i][j]<<" ";

  }
     
}

    return 0;
}