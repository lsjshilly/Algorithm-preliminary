#include<stdio.h>


bool isYear(int yy)
    {
        return (yy % 4 == 0 && yy % 100 != 0) || (yy % 400 == 0);
    }
int main()
{
    int time1, time2;
    int yy1, mm1, dd1;
    int yy2, mm2, dd2;
    int temp;
    int month[13][2] = { {0, 0}, {31, 31}, {28, 29}, {31, 31}, {30, 30}, {31, 31}, {30, 30}, {31, 31}, {31, 31}, {30, 30}, {31, 31}, {30, 30}, {31, 31}};

    while(scanf("%d%d", &time1, &time2) !=EOF)
    {
        // time1 放日期小的
        if (time1>time2)
        {
            temp = time1;
            time1 = time2;
            time2 = temp;
        }
        yy1 = time1 / 10000; mm1 = time1 % 10000 / 100; dd1 = time1 % 10000 % 100;
        yy2 = time2 / 10000; mm2 = time2 % 10000 / 100; dd2 = time2 % 10000 % 100;
        int ans = 1;
        while(yy1 < yy2 || mm1 < mm2 || dd1 < dd2)
        {
            dd1++;
            if(dd1 == month[mm1][isYear(yy1)]+1)
            {
                mm1++;
                dd1 = 1;
            }
            if(mm1 == 13)
            {
                yy1++;
                mm1 = 1;
            }
            ans++;
        }
        printf("%d\n", ans);
    }
    return 0;
}

