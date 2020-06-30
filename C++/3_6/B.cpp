#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100];
    char str2[100][100];
    int num, h, i, j;
    while(gets(str1)!=NULL){
        for(i=0;i<strlen(str1);i++)
        {
            if(i==0){
                if(str1[i]>='a'&&str1[i]<='z')
                    printf("%c", str1[i]+'A'-'a');
                else
                    printf("%c", str1[i]);
            }
            else{
                if(str1[i-1]==' '||str1[i-1]=='\t'||str1[i-1]=='\r'||str1[i-1]=='\n'){
                    if(str1[i]>='a'&&str1[i]<='z')
                        printf("%c", str1[i]+'A'-'a');
                    else
                        printf("%c", str1[i]);
                }

                else
                    printf("%c", str1[i]);
            }

        }
        printf("\n");
    }
    return 0;
}
