#include <bits/stdc++.h>
using namespace std ;
long long int n, a[1111111], ans;
int main()
{
    scanf("%lld",&n) ;
    for(long long int i=0;i<n;++i)
    {
        long long int w;
        scanf("%lld",&w) ;
        ++a[w];
    }
    for(long long int i = 0;i<1111111;++i)
    {
        a[i+1]+= a[i]/2;
        a[i]%= 2;
    }
    for(long long int i = 0;i<1111111;++i)
    {
        if(a[i]!=0) 
        	++ans;
    }
    cout << ans;
    return 0;
}