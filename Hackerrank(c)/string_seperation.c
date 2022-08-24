// Take a whole line inthe input and print the words seperately in differetnt lines.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    for(int i=0;i<strlen(s);i++){
       if(s[i]==' '){
        printf("\n");
       }
       else{
        printf("%c",s[i]);
       }
    }
    free(s);
    return 0;
}