/*
Input will consist of several lines of text containing an even number of double-quote (") characters.Input is ended with an end-of-file character

Sample Input:
"To be or not to be," quoth the Bard, "thatis the question".The programming contestant replied: "I must disagree.To `C' or not to `C', that is The Question!"

*/

#include<stdio.h>
int main()
{
    char str[200] ;

    while(scanf("%[^-1]s", &str))
    {
        printf("%s\n", str);
        break;
    }


    return 0;
}