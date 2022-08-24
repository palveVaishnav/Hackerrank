// Print a pattern of numbers from  to  as shown below. Each of the numbers is separated by a single s              
//  4 4 4 4 4 4 4  
//  4 3 3 3 3 3 4   
//  4 3 2 2 2 3 4   
//  4 3 2 1 2 3 4   
//  4 3 2 2 2 3 4   
//  4 3 3 3 3 3 4  

// (2n-1)X(2n-1)-> but how?
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,i,j;
    printf("e");
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    // size is 2n-1;
    int size=n*2-1;
    int end=size-1;
    int start=0;
    int a[size][size];
    
    while(n != 0){
        for(i=start;i<=end;i++){
            for(j=start;j<=end;j++){
                
            if(i==start || j==start || i==end ||j==end){
                    a[i][j]=n;
                }
            }
        }
        ++start;
        --end;
        --n;
    }
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("%d ",a[i][j]);
            
        }
        printf("\n");
    }    
    printf("\n\n\n");
    return 0;
}
