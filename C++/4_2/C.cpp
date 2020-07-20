#include<stdio.h>
#include<string.h>

int main(){
    int n;
    int x;
    int hashtable[10010];
    int total[100001];
    int i;
    while(scanf("%d", &n)!=EOF){
        memset(hashtable, 0, sizeof(hashtable));
        for(i=0;i<n;i++){
            scanf("%d", total+i);
            hashtable[total[i]]++;
        }
        for(i=0;i<n;i++){
            if(hashtable[total[i]]==1){
                printf("%d\n", total[i]);
                break;
            }
        }
        if(i==n) printf("None\n");
    }
    return 0;
}
