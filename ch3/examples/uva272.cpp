/**
 * `在tex中的双引号是不一样的，请转换
*/
#include<stdio.h>
int main(){
    char c;
    bool flag = true;
    while((c= getchar())!=EOF){
        if(c == '"'){
            printf("%s",flag?"``":"''");
            flag = !flag;
        }
        else{
            printf("%c",c);
        }
    }
    return 0;
}