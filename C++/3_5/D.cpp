#include<stdio.h>

int main()
{
    int N;
    int b[20];
    int num;
    while(scanf("%d", &N)!=EOF)
    {
        num=0;
        do
        {
            b[num++] = N % 8;
            N = N / 8;
        }while(N!=0);
        while(num--)
        {

            printf("%d", b[num]);
        }
        printf("\n");
    }
    return 0;
}
