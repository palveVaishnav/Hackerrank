// //Input a string and print the frequency of numbers occuring in it 
// // what about characters , do we need to manipulate them 
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){
    char* s;
    s=malloc(1024*sizeof(char));
    scanf("%s",s);
    s=realloc(s,strlen(s)+1);
    int k=0;
    int a[10];
    for(int i=0;i<10;i++){
        a[i]=0;
    }
    for(int i=0;i<strlen(s);i++){
        //using the logic of ASCII TABLE the values of character '0' is 48 and 
        // the it increases by one of every increasing digit
        // so we can either use :
        k=s[i]-48;
        // or
        k=s[i]-'0';            
        if(k>=0 && k<10){
            a[k]++;    
        }

    }
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
}











// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// #include<ctype.h>

// int digits_only(const char *s)
// {
//     while (*s) {
//         if (isdigit(*s++) == 0) 
//         return 0;
//     }

//     return 1;
// }
// int main()
// {
//     char*st;
//     int zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;
//     scanf("%[^\n]",st);
//     int x=digits_only(st);

//     if(x==0){
//         for(int i=0;i<strlen(st);i++){
//             if(st[i]=='0'){
//                 zero++;
//             }
//             if(st[i]=='1'){
//                 one++;
//             }
//             if(st[i]=='2'){
//                 two++;
//             }
//             if(st[i]=='3'){
//                 three++;
//             }
//             if(st[i]=='4'){
//                 four++;
//             }
//             if(st[i]=='5'){
//                 five++;                
//             }
//             if(st[i]=='6'){
//                 six++;
//             }
//             if(st[i]=='7'){
//                 seven++;
//             }
//             if(st[i]=='8'){
//                 eight++;
//             }
//             if(st[i]=='9'){
//                 nine++;
//             }
//         }
//     }
//     printf("%d %d %d %d %d %d %d %d %d %d",zero,one,two,three,four,five,six,seven,eight,nine);

//         for(int i=0;i<strlen(st);i++){
//             if(st[i]=='0'){
//                 // zero++;
//                 printf("%d",zero);
//             }
//             if(st[i]=='1'){
//                 // one++;
//                 printf("%d",one);
//             }
//             if(st[i]=='2'){
//                 // two++;
//                 printf("%d",two);
//             }
//             if(st[i]=='3'){
//                 // three++;
//                 printf("%d",three);
//             }
//             if(st[i]=='4'){
//                 // four++;
//                 printf("%d",four);
//             }
//             if(st[i]=='5'){
//                 // five++; 
//                 printf("%d",five);               
//             }
//             if(st[i]=='6'){
//                 // six++;
//                 printf("%d",six);
//             }
//             if(st[i]=='7'){
//                 // seven++;
//                 printf("%d",seven);
//             }
//             if(st[i]=='8'){
//                 // eight++;
//                 printf("%d",eight);
//             }
//             if(st[i]=='9'){
//                 // nine++;
//                 printf("%d",nine);
//             }
//         }
// }
        

        
    
























