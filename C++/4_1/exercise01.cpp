/*
N: <=100  number of region
K: <=300  number of student

*/


#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
struct stu{
    char id[20];
    int score;
    int region;
    int total_r;
    int region_r;
}student[30000];

bool cmp(stu a, stu b){
    if (a.score != b.score) return a.score > b.score;
    else return strcmp(a.id, b.id) < 0;
}

int main(){
    int N, K;
    int total=0;
    int num=0;
    scanf("%d", &N);
    for(int i=0;i<N;i++){
        scanf("%d", &K);
        total += K;
        for(int kk=0;kk<K;kk++){
            scanf("%s %d", student[num].id, &student[num].score);
            student[num].region = i + 1;
            num++;
        }
        sort(student+total-K, student+total, cmp);
        student[total-K].region_r = 1;
        for(int j=1;j<K;j++){
            if(student[total-K+j].score == student[total-K+j-1].score){
                student[total-K+j].region_r = student[total-K+j-1].region_r;
            }
            else{
                student[total-K+j].region_r = j + 1;
            }
        }
    }
    sort(student, student+total, cmp);
    int r = 1;
    printf("%d\n", total);
    for(int i=0;i<total;i++){
        if(i>0 && student[i].score == student[i-1].score){
            printf("%s %d %d %d\n", student[i].id, r, student[i].region, student[i].region_r);
        }
        else{
            printf("%s %d %d %d\n", student[i].id, i+1, student[i].region, student[i].region_r);
            r=i+1;
        }
    }
    return 0;
}

