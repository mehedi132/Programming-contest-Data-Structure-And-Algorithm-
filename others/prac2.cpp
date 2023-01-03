
#include <bits/stdc++.h>
using namespace std; 
int calc(string n)
{ 
    int r=0,b,a,i=0,j,o=0,z=0;
    int l=n.length();
 for(j=l-1;j>=0;j--)
 {
    b=n[j]-'0';
    if(b==0)
    {
      z++;
    }
    else
    {
        o++;
    }
 }
 if(o==z)
 {
    r=o*z;
 }
 else if(o>z)
 {
    r=o*o;
 }
 else
 {
    r=z*z;
 }

    
    return r;
}


int main()  
{   
    int t;
   cin>>t;
   while(t)
   {   
      int len,p;
      cin>>len;
   
       string car,str;
      
   //str='$';
    cin>>str;
     str=str+'\0';
    
    string p1 ="thks";
string str3;
str3=p1;
string str2(p1, 0, 3);  //This means copy 3 characters starting from position 0
cout<<"p1 = "<<p1<<endl;
cout<<"str2 = "<<str2<<" "<<str3<<endl;

     car[0]=str[0];
     car[1]=str[1];
     car[2]=str[2];
     cout<<"Car="<<car<<endl;

     
      int i, j,m=0,res=0;    // str.length()  ;
   

    
    
    cout<<"string s="<<str<<endl;
     
    for(i = 0; i < len; i++){  
        
       
            
            m=calc(str);
            if(m>res)
            {
                res=m;
            }
        
        }  
     

    cout<<res<<endl;
    t--;
   } 
 return 0;  
}
