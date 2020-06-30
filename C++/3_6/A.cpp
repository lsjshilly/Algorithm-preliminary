#include<stdio.h>

int main()
{
    char str1[100], str2[100], str[200];
    int num;
    while(scanf("%s %s", str1, str2)!=EOF)
    {
        num=0;
        for(int i=0;i<100;i++)
        {
            if(str1[i]!='\0') str[num++]=str1[i];
            else break;
        }
        for(int i=0;i<100;i++)
        {
            if(str2[i]!='\0') str[num++]=str2[i];
            else break;
        }
        str[num]='\0';
        printf("%s\n", str);
    }
    return 0;
}
