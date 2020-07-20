#include<stdio.h>
#include<algorithm>
using namespace std;

int main(){
    int n;
    int a[10000];
    int s;
    while(scanf("%d", &n)!=EOF){
        if(n==0) break;
        for(int i=0;i<n;i++){
            scanf("%d", a+i);
        }
        sort(a, a+n);
        if(n % 2 ==0) s = (a[n/2-1]+a[n/2]) / 2;
        else s = a[n/2];
        printf("%d\n", s);
    }
    return 0;
}
