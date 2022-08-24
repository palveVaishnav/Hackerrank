// 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int x,y,n=0;
    scanf("%d%d",&y,&x);
    int s[1000][1000];
    for(int i=0;i<1000;i++){
        for(int j=0;j<1000;j++){
            if(x==i && y==j){
            // Inserting the no of pages as i=no of shelf and j is the book with ent 
            scanf("%d",s[i][j]);
            }
        }
    }
    // int y;
    // scanf("%d",&y);
    for(int i=0;i<1000;i++){
        for(int j=0;j<1000;j++){
            if(y=s[i][j]){
                printf("%d",s[i][j]);
            }
        }
    }
    // print the number of books(n) on the xth shelf
    // int x,n=0;     // x to store the inputed no of shelf
    scanf("%d",&x);
    for(int i=0;i<1000;i++){
        for(int j=0;j<1000;j++){
            if(x=i && j!=0){
                n++;
            }
            

        }
    }
    printf("%d",n);

}

