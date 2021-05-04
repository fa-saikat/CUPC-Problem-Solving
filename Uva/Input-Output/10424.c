/*
Your input will be two names. Each name holds not more than 25 characters. End of file will indicatethe end of input.

Sample Input
saima
shanto
Pakistan
India
USA
USSR
*/

#include<stdio.h>
int main()
{
    int name1[25], name2[25];

    while (scanf("%s %s", &name1, &name2)!=EOF)
    {
        printf("%s %s\n", name1, name2);
    }


    return 0;
}
