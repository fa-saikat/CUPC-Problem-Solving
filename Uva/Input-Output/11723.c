/*

Input:
The input  file can contain up to 10002 lines of inputs.
Each line contains two integers R and N(0<N;R<10001).
Here R is the total number of streets to be named and N denotes number integer sallocated for naming.

Sample Input
8  5
100  2
0  0
Sample Output
Case  1:  1
Case  2:  impossible

*/

#include<stdio.h>
int main()
{
    int N, R;

    int t=1;
    while(t<=10002)
    {
        scanf("%d%d", &R, &N);
        printf("Case %d: %d %d\n", t, N, R);
        t++;
    }


}
