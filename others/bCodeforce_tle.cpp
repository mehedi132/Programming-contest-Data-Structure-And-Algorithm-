
#include <iostream>
#include<string.h>
#include <math.h>

using namespace std; 
   


string substring(string s, string sub, int p, int len){  
   int c = 0;  
    int b1= s.length();
  //cout<<"main len: " <<b1<<endl;
  string a;
  a=s;
  //cout<<"a= "<<a<<endl;
  //strcpy(a,s);
 // cout<<"i= "<<p<<"j= "<<len<<endl;
  string sb(a,p,len);
  //cout<<"function:"<<sb<<endl;
  return sb;

}  

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
      int len,p;
      cin>>len;
   
       string car,str;
      car="A";
   //str='$';
    cin>>str;
     //str=str+'\0';
    
   
      int i, j,m=0,res=0;    // str.length()  ;
   

     /* for(p=0;p<l;p++)
      {
        cin>>str[p];
        //cout<<"string s= "<<str<<endl;        
       }*/
   // str[p]='\0';
    
    //cout<<"string s="<<str<<endl;
     //printf(" %s\n",str);
   
    // cout<<"len"<<len<<endl;
      
    //printf("All subsets for the given string are: \n");  
    //This loop maintains the starting character  
    for(i = 0; i < len; i++){  
        
        for(j = 1; j <= len-i; j++){  
            car=substring(str,car,i,j); 
           //  cout<<"j"<<j<<car<<endl;
            m=calc(car);
            if(m>res)
            {
                res=m;
            }
            //cout<<"car<<"<<car<<endl;
        //   printf("%s\n",c);
       
          // printf("\tj=%d %s\n",j,c);
           // cout<<"res="<<res<<endl;
            

        }  
    } 

    cout<<res<<endl;
    t--;
   } 
 return 0;  
}
