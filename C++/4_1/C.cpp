#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;

struct student{
    char id[10];
    char name[20];
    int score;
};

bool camp1(student stu1,student stu2){
    return strcmp(stu1.id, stu2.id) < 0;
}
bool camp2(student stu1,student stu2){

    if(strcmp(stu1.name, stu2.name)!=0) return strcmp(stu1.name, stu2.name) < 0;
    else  return strcmp(stu1.id, stu2.id) < 0;
}

bool camp3(student stu1, student stu2){
    if(stu1.score!=stu2.score) return stu1.score < stu2.score;
    else  return strcmp(stu1.id, stu2.id) < 0;
}

int main(){
    int n,c;
    int k=1;
    while(scanf("%d %d", &n, &c)!=EOF){
        if(n==0) break;
        student stu[n];
        for(int i=0;i<n;i++){
            scanf("%s %s %d", stu[i].id, stu[i].name, &stu[i].score);
        }
        if(c==1){
            sort(stu, stu+n, camp1);
        }
        else if(c==2){
            sort(stu, stu+n, camp2);
        }
        else{
            sort(stu, stu+n, camp3);
        }
        printf("Case %d:\n", k);
        for(int i=0;i<n;i++){
            printf("%s %s %d\n", stu[i].id, stu[i].name, stu[i].score);
        }
        k++;
    }
    return 0;
}
