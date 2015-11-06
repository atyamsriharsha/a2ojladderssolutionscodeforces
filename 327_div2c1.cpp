#include <bits/stdc++.h>
using namespace std;
const long long int maxn = 500005;
long long int a[maxn];

long long int doit(long long int left,long long int right)
{
    long long int ret = count(a+left+1,a+right,1^a[left]);
    if(a[left] == a[right])
    {
        fill(a+left+1,a+right,a[left]);
    }
    else
    {
        long long int mid = (right+left+1)/2;
        fill(a+left+1,a+mid,a[left]);
        fill(a+mid,a+right,a[right]);
    }
    return ret;
}

int main()
{
    long long int n;
    cin >> n;
    for(long long int i = 0;i<n;++i)
    {
        cin >> a[i];
    }
    long long int ans = 0;
    long long int left = 0;
    for(long long int i=1;i<n;++i)
    {
        if (a[i] == a[i-1])
        {
            left = i;
        }
        else if(i+1==n || a[i]==a[i+1])
        {
            ans = max(ans,doit(left, i));
        }
    }
    cout << ans << endl;
    for(long long int i = 0; i < n; ++i)
        cout << a[i] << ' ';
    cout << '\n';
    return 0;
}