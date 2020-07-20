#include<stdio.h>
#include<string.h>
int main(){
    int n, m;
    int hashtalbe[201]={0};
    int n_reader[201];
    int result;
    while(scanf("%d %d", &n, &m)!=EOF){
        memset(hashtalbe, 0, sizeof(hashtalbe));
        for(int i=0;i<n;i++){
            scanf("%d", n_reader+i);
            hashtalbe[n_reader[i]]++;
        }
        for(int j=0;j<n;j++){
            result = hashtalbe[n_reader[j]]-1;
            if(result==0) printf("BeiJu\n");
            else printf("%d\n", result);
        }
    }
    return 0;
}
