/*
The first line of input contains a single integer T(T<=50), the number of test cases. This line is followed by T input cases. Each input case is on a single line of space-separated integers. The first ofthese integers is N, the number of students acting as scary creatures. The rest of the line has N moreintegers,c0,c1, ...,c1, each representing the speed of a creature in meters per second (1ci10000for each i). You can assume that they are always running in the same direction on the track


*/

#include <stdio.h>
int main()
{
    int T, N, i[N], c = 1, x;
    scanf("%d", &T);

    while (T--)
    {
        scanf("%d", &N);
        for (x = 0; x < N; x++)
        {
            scanf("%d", &i[x]);
        }
        for (x = 0; x < N; x++)
        {
            if (x == 0)
            {
                printf("Case %d: %d ", c, i[x]);
                c++;
            }
            else if (x == (N - 1))
            {
                printf("%d\n", i[x]);
            }
            else
            {
                printf("%d ", i[x]);
            }
        }
    }

    return 0;
}