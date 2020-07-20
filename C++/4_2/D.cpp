#include<stdio.h>
#include<string.h>

int main(){
    char s1[10005], s2[10005];
    int hashtable[128] = {0};
    while(gets(s1)!=NULL){
        gets(s2);
        memset(hashtable, 0, sizeof(hashtable));
        for(int i=0;i<strlen(s2);i++){
            hashtable[(int)s2[i]]=1;
        }

        for(int i=0;i<strlen(s1);i++){
            if(hashtable[(int)s1[i]]==0) printf("%c", s1[i]);
        }
        printf("\n");
    }
    return 0;
}
