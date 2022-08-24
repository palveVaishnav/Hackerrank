// For example, 4 % 3 = 1 and 12 % 10 = 2. The ordinary division operator, /, returns a truncated integer value when performed on integers. 
// For example, 5 / 3 = 1. To get the last digit of a number in base 10, use  as the modulo divisor.For example, 4 % 3 = 1 and 12 % 10 = 2. 
// The ordinary division operator, /, returns a truncated integer value when performed on integers. For example, 5 / 3 = 1. 
// To get the last digit of a number in base 10, use  as the modulo divisor.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int sum,a,b,c,d,e,f;
    e=n%10;
    d=(n%100-e)/10;
    c=(n%1000-(d*10+e))/100;
    b=(n%10000-n%1000)/1000;
    a=(n%100000-n%10000)/10000;
    sum=a+b+c+d+e;
    
    printf("%d",sum);
    return 0;
}