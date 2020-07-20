#include<stdio.h>
#include<algorithm>
using namespace std;
struct shu{
    int weight;
    char color[20];
};
bool camp(shu s1, shu s2){
    return s1.weight > s2.weight;
}

int main(){
    int n;
    while(scanf("%d", &n)!=EOF){
        shu s[n];
        for(int i=0;i<n;i++){
            scanf("%d %s", &s[i].weight, s[i].color);
        }
        sort(s, s+n, camp);
        for(int i=0;i<n;i++){
            printf("%s\n", s[i].color);
        }

    }
    return 0;
}
