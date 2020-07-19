#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
    int n;
    int a[1001];
    while(scanf("%d", &n)!=EOF){
        for(int i =0;i<n;i++){
            scanf("%d", a+i);
        }
        if(n==1){
            printf("%d\n", a[0]);
            printf("%d\n", -1);
        }
        else{
            sort(a, a+n);
            printf("%d\n", a[n-1]);

            for(int i=0;i<n-1;i++)
            {
                printf("%d ", a[i]);
            }
            printf("\n");
        }

    }
}
