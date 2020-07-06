#include<stdio.h>
#include<string.h>

int main(){
    char s[300];
    while(gets(s)!=NULL){
        for(int i=strlen(s)-1;i>=0;i--){
            printf("%c", s[i]);
        }
        printf("\n");

    }
    return 0;
}
