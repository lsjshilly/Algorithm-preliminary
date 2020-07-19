#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
    char s[201];
    int n;
    while(gets(s)!=NULL){
        n = strlen(s);
        sort(s, s+n);
        printf("%s\n", s);
    }
    return 0;
}
