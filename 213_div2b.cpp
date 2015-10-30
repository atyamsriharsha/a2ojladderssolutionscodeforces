#include <bits/stdc++.h>
using namespace std ;
int main()
{
	long long int n,temp ;
	cin >> n ;
	std::vector<long long int> v;
	v.push_back(0) ;
	long long int cumsum[n+1] ;
	for(long long int i=0;i<=n;i++)
	{
		cumsum[i]=0 ;
	}
	for(long long int i=0;i<n;i++)
	{
		cin >> temp ;
		v.push_back(temp) ;
	}
	if(n==1)
	{
		cout << 1 ;
		return 0 ;
	}
	for(long long int i=3;i<=n;i++)
	{
		cumsum[i] = v[i-1]+v[i-2] ;
	}
	long long int count1 =0,ans=0 ;
	for(long long int i=3;i<=n;i++)
	{
		if(v[i]==cumsum[i])
		{
			count1++ ;
			ans = max(ans,count1) ;
		}
		else
		{
			count1 = 0 ;
		}
	}
	cout << ans+2 ;
	return 0 ;
}