#include <bits/stdc++.h>
using namespace std ;
long long int last[1000007],dp[4005][4005],a[4005];
int main()
{
    long long int n;
    cin >> n;
    for(long long int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    long long int ans = 1;
    for(long long int i=1;i<=n;i++)
    {
        for(long long int j=i+1;j<=n;j++)
        {
            if(last[a[j]]==0)
            {
                dp[i][j]=2;
            }
            else
            {
                dp[i][j] = dp[last[a[j]]][i] + 1;
            }
            ans = max(ans, dp[i][j]);
        }
        last[a[i]] = i;
    }
    cout << ans;
    return 0 ;
}