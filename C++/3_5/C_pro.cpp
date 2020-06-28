#include<stdio.h>
#include<string.h>

int main()
{
    char n[40];
    char b[200];
    int r[40];
    int s[40];
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
            s[0] = n[0]-'0';
            for(i=0;i<strlen(n)-1;i++)
            {
                r[i] = s[i] % 2;
                n[i] = s[i] / 2 + '0';
                s[i+1] = r[i] * 10 + (n[i+1]-'0');
                sum += n[i]-'0';
            }
            n[i] = s[i] / 2 + '0';
            sum += n[i] - '0';

        }while(sum!=0);
        while(num--)
        {
            printf("%c", b[num]);
        }
        printf("\n");
    }
    return 0;
}
