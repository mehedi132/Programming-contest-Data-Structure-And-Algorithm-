#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int,int>p1,pair<int,int>p2)
{
   return p1.second<p2.second; 
}

int main()
{ int n,m,c=0,res=1;
 vector< pair<int, int>> v;
 cin>>n;
int a,b;
//int arr[m];
for (int i=0;i<n;i++)
{ 
   cin>>a>>b;
    v.push_back(make_pair(a,b));
}

/*for (int i=0;i<n;i++)
{
     cout<< v[i].first<<" "<<v[i].second<<endl;
}
*/
sort(v.begin(), v.end() , comp);
//cout<<"After sort:"<<endl;
/*for (int i=0;i<n;i++)
{
     cout<< v[i].first<<" "<<v[i].second<<endl;
}*/

c=v[0].second;
for (int i=1;i<n;i++)
{
   if(v[i].first>=c)
   {
      c=v[i].second;
      res++;
   }
}

cout<<res;


 return 0;
}