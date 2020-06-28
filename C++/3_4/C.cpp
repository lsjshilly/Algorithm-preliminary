#include<stdio.h>

bool isYear(int yy)
{
    return (yy % 4 == 0 && yy % 100 != 0) || (yy % 400 == 0);
}


int main()
{
    int y, n;
    int monthmm[13][2] = { {0, 0}, {31, 31}, {28, 29}, {31, 31}, {30, 30}, {31, 31}, {30, 30}, {31, 31}, {31, 31}, {30, 30}, {31, 31}, {30, 30}, {31, 31}};
    int yy, mm, dd;
    while(scanf("%d%d", &y, &n)!=EOF)
    {
        yy = y;
        mm = 1;
        dd = 0;
        while(n--)
        {
            dd++;
            if(dd==monthmm[mm][isYear(yy)]+1)
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
        // зЂвт%04d
        printf("%04d-%02d-%02d\n", yy, mm, dd);
    }
    return 0;
}
