#include<stdio.h>
#include<algorithm>

using namespace std;

bool camp(int a, int b){

        return a % 2 > b % 2;
}

bool camp1(int a, int b){
    return a < b;
}
bool camp2(int a, int b){
    return a > b;
}

int main(){
    int a[10];
    int i;
    while(scanf("%d", a)!=EOF){
        for(i=0;i<9;i++){
            scanf("%d", a+i+1);
        }
        sort(a, a+10, camp);
        for(i=0;i<10;i++){
            if(a[i]%2!=1) break;
        }
        sort(a, a+i, camp2);
        sort(a+i, a+10, camp1);
        for(i=0;i <10;i++){
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    return 0;
}
