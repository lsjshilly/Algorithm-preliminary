
#include<stdio.h>
#include<string.h>

int main(){
    char s[100000];
    char c;
    while(gets(s)!=NULL){
        //getchar();
        scanf("%c", &c);
        for(int i=0;i<strlen(s);i++){
            if(s[i]==c) printf("");
            else printf("%c",s[i]);
        }
        printf("\n");
        getchar();   // 使用gets() 前要先接受换行符
    }
    return 0;
}
