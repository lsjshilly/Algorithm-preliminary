#include<stdio.h>
#include<string.h>
int month(char* str1)
{
    char str[13][20] = {{"ww"}, {"January"}, {"February"}, {"March"}, {"April"}, {"May"}, {"June"},{"July"}, {"August"}, {"September"}, {"October"}, {"November"}, {"December"}};
    int i;
    for ( i=1; i<13;i++)
    {
        if(strcmp(str[i], str1)==0)
            break;
    }
    return i;
}
bool isYear(int yy)
{
    return (yy % 4 == 0 && yy % 100 != 0) || (yy % 400 == 0);
}

void output(int weekday)
{
    if(weekday==1) printf("Monday\n");
    else if(weekday==2) printf("Tuesday\n");
    else if(weekday==3) printf("Wednesday\n");
    else if(weekday==4) printf("Thursday\n");
    else if(weekday==5) printf("Friday\n");
    else if(weekday==6) printf("Saturday\n");
    else printf("Sunday\n");

}


int main()
{
    int dd1, mm1, yy1, weekday1;
    int dd2, mm2, yy2, weekday2;
    int time1;
    int temp;
    char mont[20];
    int monthmm[13][2] = { {0, 0}, {31, 31}, {28, 29}, {31, 31}, {30, 30}, {31, 31}, {30, 30}, {31, 31}, {31, 31}, {30, 30}, {31, 31}, {30, 30}, {31, 31}};
    while(scanf("%d %s %d", &dd1, mont, &yy1)!=EOF)
    {
        dd2 = 28; mm2 = 6; yy2 = 2020; weekday2 = 7;
        mm1 = month(mont);
        time1 = yy1 * 10000 + mm1 * 100 + dd1;
        if(time1==20200628)
            weekday2=7;
        else if(time1>20200628)
        {
            while(yy2<yy1 || mm2<mm1 || dd2 <dd1)
            {
                dd2++;
                if(dd2==monthmm[mm2][isYear(yy2)]+1)
                {
                    mm2++;
                    dd2=1;
                }
                if(mm2==13)
                {
                    yy2++;
                    mm2=1;
                }
                weekday2++;
                if(weekday2==8)
                {
                    weekday2=1;
                }
            }
        }
        else
        {
            while(yy2>yy1 || mm2>mm1 || dd2 >dd1)
            {
                dd2--;
                if(dd2==0)
                {
                    mm2--;
                    if(mm2==0)
                    {
                        mm2=12;
                        yy2--;
                    }
                    dd2=monthmm[mm2][isYear(yy2)];
                }

                weekday2--;
                if(weekday2==0)
                {
                    weekday2=7;
                }
            }
        }

        output(weekday2);
    }
    return 0;
}
