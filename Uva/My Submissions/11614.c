#include<stdio.h>
int main()
{
    int t;
    long long n;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%lld", &n);
        for(r=1; r<=n; r++)
        {
            printf("%d ", r);
            printf("\n");
        }

    }

    return 0;
}
