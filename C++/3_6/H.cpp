#include<stdio.h>
#include<string.h>

int main(){
    int m;
    char s[101][25];
    scanf("%d", &m);
    int i, j;
    int n;
    getchar();
    for(i=0;i<m;i++){
        gets(s[i]);
        n = i - 3 > 0? i-3: 0;
        for(j=i;j>=n;j--){
            printf("%d=%s ", i-j+1, s[j]);
        }
        printf("\n");
    }
    return 0;
}
