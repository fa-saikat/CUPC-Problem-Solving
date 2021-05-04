/*

Input file contains around 2000 lines of inputs. Eachline contains a string S. You can assume that all theletters of the string are uppercase English letters and the maximum length of the string is 14. Input is terminated by a line containing a single ‘#’ character (without the quote). This line should not beprocessed.

*/

#include<stdio.h>
int main()
{
    int t=1;
    char s[14];
    char b;
    while(scanf("%s", &s), s[0]!='#')
    {
        printf("Case %d: %s\n", t,s);
        t++;
    }

    return 0;
}
