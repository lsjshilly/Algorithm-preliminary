#include<stdio.h>
#include<string.h>

int main(){
    char s[150], a[150], b[150];
    char temp[101];
    int i, j, num;
    while(gets(s)!=NULL){
        gets(a);
        gets(b);
        for(i=0;i<strlen(s);i++){
            if(s[i]!=' ') temp[num++] = s[i];
            else{
                temp[num]='\0';
                num=0;
                if(strcmp(temp, a)==0) printf("%s ", b);
                else printf("%s ", temp);
            }
        }
        temp[num]='\0';
        if(strcmp(temp, a)==0) printf("%s", b);
        else printf("%s", temp);
        printf("\n");
    }
    return 0;
}
