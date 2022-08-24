// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// #include<math.h>

// int main ()
// {
//     int n;
//     scanf("%d",&n);
//     int A[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",A[(n-1)-i]);
        
//     }
//     for(int i=0;i<n;i++){
//         printf("%d",A[i]);
//     }
// }

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));    //dynamic memory allocated to given array
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    int *temp;
    temp=(int*)malloc(num*sizeof(int));  //same space for temperory array
    for(i = 0 ; i < num ; i++) {
        *(temp+i)=*(arr+(num-1-i)); 
        // *(temp+i)=*(arr-i);
    }
    // temp=arr;    
    // printf("Reversed array\n");
    for(i = 0; i < num; i++){
        printf("%d ", *(temp +i));
    }
    return 0;
    free(arr);
    free(temp);
}