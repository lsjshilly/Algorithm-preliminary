
#include<stdio.h>
#include<string.h>

int main()
{
    char n[40];
    char b[200];
    int r;
    int s;
    int num, sum;
    int i;
    while(scanf("%s", n)!=EOF)
    {
        num=0;
        do
        {
            // 计算 余数
            b[num++] = (n[strlen(n)-1]-'0') % 2 + '0';
            // 计算商  字符串除法
            sum = 0;
            r = 0;
            for(i=0;i<strlen(n);i++)
            {
                s = r * 10 + (n[i]-'0');
                r = s % 2;
                n[i] = s / 2 + '0';
                sum += n[i]-'0';
            }
        }while(sum!=0);


        while(num--)
        {
            printf("%c", b[num]);
        }
        printf("\n");
    }
    return 0;
}
