#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
    int m, n;
    int hashable[200][200]={0};
    int nums[200], groups[200];
    int numss[200], groupss[200];
    while(scanf("%d", &m)!=EOF){
        scanf("%d", &n);
        for(int i=0;i<200;i++){
            memset(hashable[i], 0, sizeof(hashable[i]));
        }
        for(int i=0;i<n;i++){
            scanf("%d", nums+i);
        }
        for(int i=0;i<n;i++){
            scanf("%d", groups+i);
        }
        for(int i=0;i<n;i++){
            hashable[groups[i]][nums[i]]++;
        }
        sort(nums, nums+n);
        sort(groups, groups+n);
        int num1=0, num2=0;
        numss[num1++] = nums[0];
        groupss[num2++] = groups[0];
        for(int i=0;i<n;i++){

            if(nums[i]!=nums[i-1]&&i>=1) numss[num1++]=nums[i];
            if(groups[i]!=groups[i-1]&&i>=1) groupss[num2++]=groups[i];
        }
        int j;
        for(int i=0;i<num2;i++){
            printf("%d={", groupss[i]);
            for(j=0;j<num1;j++){
                printf("%d=%d", numss[j],hashable[groupss[i]][numss[j]]);
                if(j!=num1-1) printf(",");
            }
            printf("}\n");
        }
    }
    return 0;

}
