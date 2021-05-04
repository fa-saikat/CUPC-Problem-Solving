/*

First line of input consists of an integer S(23), the number of problemsets with 13 problems. Each of next S lines consists of 13 space separated integers, the predicted number of teams to solve each problem.

Sample Input 21 28 64 48 32 24 16 12 8 6 4 3 2 1128 64 48 32 24 16 12 8 6 4 2 1 0
Sample Output
Set #1: Yes
Set #2: No
*/

#include <stdio.h>
int main()
{
    int S, s=1, N=13, x[N];
    scanf("%d", &S);

    while(S--)
    {

        for(int i=0; i<N; i++)
        {
            scanf("%d", &x[i]);
        }

        printf("Set #%d: ", s);
        s++;
        
        for(int i=0; i<N; i++)
        {
            printf("%d ", x[i]);
        }
        printf("\n");
    }


    return 0;
}