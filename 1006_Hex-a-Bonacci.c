#include<stdio.h>

/*int a, b, c, d, e, f;
long long fn( int n )
{
    long long sum;
    int i;
    if( n == 0 ) return a;
    else if( n == 1 ) return b;
    else if( n == 2 ) return c;
    else if( n == 3 ) return d;
    else if( n == 4 ) return e;
    else if( n == 5 ) return f;
    else
    {
        for (i=6; i<=n; i++)
        {
            sum=a+b+c+d+e+f;
            a=b;
            b=c;
            c=d;
            d=e;
            e=f;
            f=sum;
        }
        return sum;
    }
}
int main()
{
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- )
    {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %lld\n", ++caseno, fn(n)%(long long)10000007);
    }
    return 0;
}*/

int main() {
    int a, b, c, d, e, f,x,i;
    int dp[10001];
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- ) {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        dp[0]=a% 10000007;
        dp[1]=b% 10000007;
        dp[2]=c% 10000007;
        dp[3]=d% 10000007;
        dp[4]=e% 10000007;
        dp[5]=f% 10000007;
        x=dp[0]+dp[1]+dp[2]+dp[3]+dp[4];
        for(i=6; i<=n; i++) {
            x=x+dp[i-1];
            dp[i]=x% 10000007;
            x=x-dp[i-6];
        }
        printf("Case %d: %d\n", ++caseno, dp[n]);
    }
    return 0;
}
