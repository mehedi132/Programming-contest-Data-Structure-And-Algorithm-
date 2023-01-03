#include <bits/stdc++.h>
using namespace std;
int n=100;
int prime[100];
int status[100/32];

bool check(int n,int pos)
{
    return (n & (1<<pos)); //check the bit either 0 or 1

}
int setbit(int n, int pos)
{
    return  (n|1<<pos); // set bit 1
}


void sieve()
{
  int i,j,sqrN;
  sqrN=int  (sqrt(n));
  for(i=3;i<=sqrN;i+=2)
  {
     
     if(check(status[i/32],i % 32)==0) // (i/32) provide index from array or the number to check prime or not 0-31 in index 0, 32-63 in index 1
     {                                   // (i%32) provide the bit number
       for( j = i*i; j <= n; j += 2*i )
	    {
        
			 status[j/32]=setbit(status[j/32],j % 32)   ; // set the bit at index x =1
             
        } 
	 		 
     }

  }
   puts("2"); // add 2 in array as it was not include
  
	 for(i=3;i<=n;i+=2)
		 if( check(status[i/32],i%32)==0)
	 	 printf("%d\n",i);

}

int main()
{ 
    sieve();
    
   

    return 0;
}