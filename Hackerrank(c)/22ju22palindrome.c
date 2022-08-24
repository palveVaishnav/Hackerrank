// // to check if the given input is a palindrooome or not 
// /*the benifit of using a pointer insted of an array/string is that we can reallocate the size 
//  and save the memory */


#include<stdio.h>
#include<string.h>

void palindrome(char str[]);
int main ()
    {
        char *str;
        scanf("%[^\n]s",str);
        // Passing the entered string to the function 
        palindrome(str);   
        // how to free the memory allocated to the string poinnter
        // free(str);
    }

void palindrome(char str[]){
    // e as a loop terminator
    int e=strlen(str)-1;
    int s=0;

    /* BOTH LOOPS ARE WORKING */

    // for(s=0;e>s;s++){
    //     if(str[s]  != str[e]){
    //         printf("\n%s Not a palindrome! %c",str,2);
    //         return;
    //     }
    //     e--;
    // }

    while(e>s){
        if(str[s] != str[e]){
            printf("\n%s NOT A PALINDROME %c",str,2);
            return;
        }
        e--;
        s++;
    }


    printf("%s is a palindrome! %c",str,3);

}

