#include<string.h>
#include<stdio.h>

int main(){
    char s[150], a[150], b[150];
    char ss[150][150];
    int i, j, num, width;
    while(gets(s)!=NULL){
        //getchar();
        gets(a);
        //getchar();
        gets(b);
        //getchar();
        num=0;
        width=0;
        for(i=0;i<strlen(s);i++){
            if(s[i]!=' ') ss[num][width++]=s[i];
            else{
                ss[num][width]='\0';
                width=0;
                num++;
            }
        }
        ss[num][width]='\0';
        for(i=0;i<=num;i++){
            if(strcmp(a, ss[i])==0) printf("%s", b);
            else printf("%s", ss[i]);
            if(i!=num) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
