#include<stdio.h>
#include<string.h>

int main(){
    char s[260];
    int i, n;
    while(gets(s)!=NULL){
        n = strlen(s);
        for(i=0;i<n/2;i++){
            if(s[i]!=s[n-i-1])
            break;
        }
        if(i!=n/2) printf("NO\n");
        else printf("YES\n");

    }
    return 0;
}
