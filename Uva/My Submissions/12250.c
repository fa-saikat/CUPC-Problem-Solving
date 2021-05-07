#include<stdio.h>
int main()
{
    char str[16];
    int c=1;

    while(scanf("%s", &str), str[0]!='#')
    {
        printf("Case %d: ", c++);

        if(str=="HELLO")
        {
            printf("ENGLISH\n");
        }
        else if(str=="HOLA")
        {
            printf("SPANISH\n");
        }
        else if(str=="HALLO")
        {
            printf("GERMAN\n");
        }
        else if(str=="BONJOUR")
        {
            printf("FRENCH\n");
        }
        else if(str=="CIAO")
        {
            printf("ITALIAN\n");
        }
        else if(str=="ZDRAVSTVUJTE")
        {
            printf("RUSSIAN\n");
        }
        else
        {
            printf("UNKNOWN\n");
        }
    }

    return 0;
}
