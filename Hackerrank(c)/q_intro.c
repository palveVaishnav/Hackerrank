
// This challenge requires you to print  on a single line, and then print the already provided input string to stdout. If you are not familiar with C, you may want to read about the printf() command.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);
  	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */      printf("Hello, World!\n");
    printf("%s",s);
    return 0;
}


// You have to print the character,ch, in the first line. Then print s in next line. In the last line print the sentence,sen .
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ch,s[20],sen[100];
    scanf("%c\n%s\n%[^\n]s",&ch,&s,&sen);
    printf("%c\n%s\n%s",ch,s,sen);
    // scanf("%c",&ch);
    // scanf("%s\n",&s);
    // scanf("%[^\n]s",&sen);
    // printf("%c",ch);
    // printf("\n%s",s);
    // printf("\n%s",sen);
    return 0;
}


// Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float x,y;
    scanf("%d %d",&a,&b);
    scanf("\n%f %f",&x,&y); 
    printf("%d %d",a+b,a-b);
    printf("\n%0.1f %0.1f",x+y,x-y);
    return 0;
}




// Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.
#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
int max_of_four(int a,int b,int c,int d){
    if(a>b && a>c && a>d){
        return a;
    }
    else if(b>c && b>d){
        return b;
    }
    else if(c>d){
        return c;
    }
    else{
        return d;
    }
    // int m=b,n=d;
    // if(a>b){
    //     m=a;
    // }
    // if(c>d){
    //     n=c;
    // }
    // if(m>n){
    //     return m;
    // }
    // else{
    //     return n;
    // }
}
// get two int a and b , store there sum in a and subtract in b 

#include <stdio.h>
#include<stdlib.h>
void update(int *a,int *b) {
    // Complete this function 
    int add,sub;
    add=(*a)+(*b);
    sub=abs(*a-*b);
    *a=add;
    *b=sub;
    // if(a>b){
    //     *b=(*a)-(*b);
    // }
    // else{
    //     *b=(*b)-(*a);
    // }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

