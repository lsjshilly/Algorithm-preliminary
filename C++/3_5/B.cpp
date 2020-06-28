#include<stdio.h>
#include<string.h>
int strtonum(char s)
{
    // C++ 中不能这么写 'a'<=s<='z', 要写成&&的形式。
    if (s>='a'&&s<='z')
        return s-'a'+10;
    if(s>='A'&&s<='Z')
        return s-'A'+10;
    if(s>='0'&&s<='9')
        return s-'0';
}
int main()
{
    int a, b;
    char n[40];
    long long temp;
    char z[40];
    long long product;
    int num;
    int remainder;
    while(scanf("%d %s %d", &a, n, &b)!=EOF)
    {
        temp = 0;
        product = 1;
        for(int i=strlen(n)-1;i>=0;i--)
        {
            temp = temp + strtonum(n[i]) * product;
            product = product * a;
        }
        num=0;
        do
        {
            remainder = temp % b;
            if(remainder>=10)
                z[num++] = (temp % b - 10) + 'A';
            else
                z[num++] = (temp % b) + '0';
            temp = temp / b;

        }while(temp!=0);
        for(int i=num-1;i>=0;i--)
        {
            printf("%c", z[i]);

        }
        printf("\n");
    }
    return 0;
}
