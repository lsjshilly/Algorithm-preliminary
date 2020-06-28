#include<stdio.h>

int main()

{
    int m;
    int year, month, day;
    int mon[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 ,31};
    scanf("%d", &m);
    while(m--)
    {
        scanf("%d%d%d", &year, &month, &day);
        day++;
        if(day == mon[month] + 1)
        {
            month++;
            day = 1;
        }
        if(month==13)
        {
            month=1;
            year++;
        }
        printf("%04d-%02d-%02d\n", year, month, day);
    }
}
