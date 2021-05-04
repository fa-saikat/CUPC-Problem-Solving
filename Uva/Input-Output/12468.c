/*

The input contains several test cases (at most 200).Each test case is described by two integersaandbin a single line. a is the channel I’m currently watching and b is the channel I would like to go to (0a;b99).The last line of the input contains two ‘-1’s and should not be processed.

*/

#include<stdio.h>
int main()
{
    int t, a, b;

    while (scanf("%d%d", &a, &b), a>=0 && b>=0)
    {
        printf("%d %d\n", a, b);
    }
    

    return 0;
}