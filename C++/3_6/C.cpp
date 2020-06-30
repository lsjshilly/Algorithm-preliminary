#include<stdio.h>
#include<string.h>
char tolower(char s){
    if(s>='a'&&s<='z') return s;
    else if(s>='A'&& s<='Z') return s-'A'+'a';
    else return s;

}
int main(){
    char str1[100];
    char str2[2000];
    scanf("%s", str1);
    getchar();
    int i, j;
    while(gets(str2)!=NULL){
        for( i=0;i<strlen(str2);i++){
            for ( j=i;j<strlen(str1)+i;j++){
                if(tolower(str2[j])!=tolower(str1[j-i]))
                {
                    break;
                }
            }
            if(j==strlen(str1)+i) i +=strlen(str1)-1;
            else{
                if(str2[i]!=' ') printf("%c", str2[i]);
                else printf("");
            }
        }
        printf("\n");
    }
    return 0;
}

