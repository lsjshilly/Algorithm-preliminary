#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
    int m;
    int a[10][10]={0};
    int s[21];
    int num=0;
    scanf("%d", &m);
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            scanf("%d", &a[i][j]);
        }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            s[num] += a[i][j];
        }
        num++;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            s[num] += a[j][i];
        }
    num++;
    }
    for(int i=0;i<m;i++){
        s[num] += a[i][i];
    }
    sort(s, s+num+1);
    for(int i=num;i>=0;i--){
        printf("%d ", s[i]);
    }
    printf("\n");

    }
        return 0;
}
