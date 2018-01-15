#include<stdio.h>

int main()
{
    int T,i;
    scanf("%d",&T);
    int n[T];
    for(i=0; i<T; i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0; i<T; i++)
    {
        printf("%d %d\n",n[i]/2,n[i]-n[i]/2);
    }
    return 0;
}
