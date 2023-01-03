#include <iostream>
#include<string.h>
#include <math.h>

using namespace std;  
void substring1(char s[], char sub[], int p, int len){  
   int c = 0;  
   while (c < len) {  
      sub[c] = s[p+c];  
      c++;  
   }  
   sub[c] = '\0';  
}  


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
 if(o*z>0)
 {
    r=o*z;
 }
 else if(o>0 && z==0)
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
      int l,p;
   cin>>l;  
   
   char c[l];
   char str[l]={'1','\0'};
  
    int i, j,m=0,res=0;    
   

    for(p=0;p<l;p++)
    {
        cin>>str[p];
             
    }
       int len =strlen(str);
      
    
    for(i = 0; i < len; i++){  
        
        for(j = 1; j <= len-i; j++){  
            substring1(str,c,i,j); 
            m=calc(c);
            if(m>res)
            {
                res=m;
            }
                     

        }  
    } 

    cout<<res<<endl;
    t--;
} 
    return 0;  
}  