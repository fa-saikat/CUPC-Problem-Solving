/*
The input starts with line containing a single integerN,0<N<20, which is the number of groups to process. Following this are N lines, each containing ten distinct positive integers less than 100.
*/

#include <stdio.h>
int main()
{
    int N, l[10];
    scanf("%d", &N);

    while ((N--))
    {
        for (int i = 0; i < 10; i++)
        {
            scanf("%d", &l[i]);
        }
        for (int i = 0; i < 10; i++)
        {
            if (i == 9)
            {
                printf("%d\n", l[i]);
            }
            else
            {
                printf("%d ", l[i]);
            }
        }
    }

    return 0;
}