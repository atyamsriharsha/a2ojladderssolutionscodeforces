#include <bits/stdc++.h>
using namespace std ;
const long long int max1 = 2000000+7 ;
long long int a[max1];
bool flag[max1];

int main()
{
	long long int res=0,n,s,t ;
	cin >> n >> s >> t;
	for(long long int i=1;i<=n;i++)
	{ 
		cin >> a[i] ;
	}
	long long int u=s;
	while(u!=t)
	{
		if(flag[u]!=0)
		{
			res = -1;
			break;
		}
		flag[u] = 1;
		u = a[u];
		res++;
	}
	cout << res;
    return 0;
}