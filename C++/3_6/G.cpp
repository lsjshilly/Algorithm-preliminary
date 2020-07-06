#include<stdio.h>
#include<string.h>

int main(){
    int m;
    int na, nb;
    char a[100], b[100];
    scanf("%d", &m);
    while(m--)
    {
        scanf("%s%s",a, b);
        na = strlen(a);
        nb = strlen(b);
        if(na>nb){
            printf("%s ", a);
            printf("is longer than ");
            printf("%s\n",b);
        }
        else if(na==nb){
            printf("%s ", a);
            printf("is equal long to ");
            printf("%s\n",b);
        }
        else{
            printf("%s ", a);
            printf("is shorter than ");
            printf("%s\n",b);
        }

    }
}
