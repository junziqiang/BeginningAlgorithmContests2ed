/**
 * 敲错字符,默认不会
 * 
*/
#include<stdio.h>
char s[] = "`1234567890-=WERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
int main(){
    char c;
    int i;
    while((c = getchar()) != EOF){
        for(i = 1; s[i]&&s[i]!=c; i++);
        if(s[i])
            putchar(s[i - 1]);
        else
            putchar(c);
    }
    return 0;
}