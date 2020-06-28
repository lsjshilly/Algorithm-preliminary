#include<stdio.h>

int main()
{
    long long  a, b;
    long long sum;
    int m;
    int z[40];
    int num;
    while(scanf("%d", &m)!=EOF)
    {
        if(m==0) break;
        scanf("%lld %lld", &a, &b);
        num = 0;
        sum = a + b;
        do
        {
            z[num++] = sum % m;
            sum = sum / m;
        }while(sum!=0);
        for (int i=num-1;i>=0;i--)
        {
            printf("%d", z[i]);
        }
        printf("\n");
    }
    return 0;
}
