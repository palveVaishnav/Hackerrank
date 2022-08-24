#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,sum=0,buff=0,s1=0,b1=0,*s;
    scanf("%d",&n);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    s=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",s+i);
    } 
    for(i=0;i<n;i++){
        sum= buff + *(s+i);
        buff=sum;
    }
    printf("%d",sum);
    return 0;
    free(s);
}


// // my way of allocating memory.
// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// #include<math.h>

// int main(){
//     int n;
//     printf("E:");
//     scanf("%d",&n);
//     int i, s[n];
//     for(i=0;i<n;i++){
//         scanf("%d",&s[i]);
//     }
//     int sum,buff=0;
//     for(i=0;i<n;i++){
//         // int buff=0;
//         sum=buff + s[i];
//         buff=sum;
//     }
//     printf("sum=%d",sum);

// }

// vaishnav_20140622;1440












































