#include <iostream>
#include <string>
#include <set>
using namespace  std;
int main()
{ int t;
    string s;
    int n,i,d=1,c,c1;
   // set<char> a;
  

    cin>>t;
    while(t)
    {
        set<char> a;
        cin>>s;
        for (i=0;i<s.size();i++)
        { a.insert(s[i]);
             
        }
        c=a.size();
        cout<<c<<endl;

        t--;
    }

return 0;
}