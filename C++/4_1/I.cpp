#include<string.h>
#include<stdio.h>
#include<algorithm>
using namespace std;

struct student{
    char id[25];
    int total;
    int pro_num[10];
    int score;
}stu[1000];

bool camp(student stu1, student stu2){
    if(stu1.score!=stu2.score) return stu1.score > stu2.score;
    else return strcmp(stu1.id, stu2.id) < 0;
}


int main(){
    int n, m, g;
    int a[10]={0};
    int i;
    while(scanf("%d %d %d", &n, &m, &g)!=EOF){
        if(n==0) break;
        for(i=0;i<m;i++){
            scanf("%d", a+i);
        }
        for(i=0;i<n;i++){
            stu[i].score=0;
            scanf("%s %d",stu[i].id, &stu[i].total);
            for(int j=0;j<stu[i].total;j++){
                scanf("%d", stu[i].pro_num+j);
                stu[i].score += a[stu[i].pro_num[j]-1];
            }
        }
        sort(stu, stu+n, camp);
        for(i=0;i<n;i++){
            if(stu[i].score<g){
                printf("%d\n", i+1);
                break;
            }
        }
        if(i==n) printf("%d\n", n);
        for(i=0;i<n;i++){
            printf("%s %d\n", stu[i].id, stu[i].score);
        }
    }
    return 0;
}
