#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  
    int m_and=0,m_or=0,m_xor=0,i=0,j=0,a=0,or=0,xor=0;
    // while(n!=0){
     for(i=1;i<=n;i++){
         for(j=i+1;j<=n;j++){
             a=i&j;
             or=i | j;
             xor=i^j;
         
         if(a<k&& a>m_and){
             m_and=a;
         }
         if(or<k && or>m_or){
             m_or=or; 
         }
         if(xor<k && xor>m_xor){
              m_xor=xor;
         }
         }
     }
//  }
     printf("%d\n%d\n%d",m_and,m_or,m_xor);
     }
  
  


int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
