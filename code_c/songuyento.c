#include "stdio.h"
#include "math.h"
int isnt(long int n)
{
    if(n<= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n%i ==0) return 0;
    }
    return 1;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int n;
        scanf("%li",&n);
        if(isnt(n)) printf("YES\n");
        else printf("NO\n");
    }
}