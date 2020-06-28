#include<stdio.h>

bool isYear(int yy)
{
    return (yy % 4 == 0 && yy % 100 != 0) || (yy % 400 == 0);
}

int main()
{
    int m;
    int yy, mm, dd, n;
    int monthmm[13][2] = { {0, 0}, {31, 31}, {28, 29}, {31, 31}, {30, 30}, {31, 31}, {30, 30}, {31, 31}, {31, 31}, {30, 30}, {31, 31}, {30, 30}, {31, 31}};
    scanf("%d", &m);
    while(m--)
    {
        scanf("%d%d%d%d", &yy, &mm, &dd, &n);
        while(n--)
        {
            dd++;
            if(dd == monthmm[mm][isYear(yy)]+1)
            {
                mm++;
                dd=1;
            }
            if(mm==13)
            {
                yy++;
                mm=1;
            }
        }
        printf("%04d-%02d-%02d\n", yy, mm, dd);
    }
    return 0;
}
