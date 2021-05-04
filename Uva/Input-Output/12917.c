/*

Input:
The input consists of several test cases, each one on a single line that contains 3 integersP(1<=P<=5),H(1<=H<=5) andO(1<=P<=O<=10).

*/

#include <stdio.h>
int main()
{
    int P, H, O;

    while (scanf("%d%d%d", &P, &H, &O) != EOF)
    {
        printf("%d %d %d\n", P, H, O);
    }

    return 0;
}