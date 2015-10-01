#include <bits/stdc++.h>
using namespace std ;
int main()
{
	long long int n,m,temp ;
	cin >> n >> m ;
	std::vector<long long int> v;
	v.push_back(1) ;
	for(long long int i=0;i<m;i++)
	{
		cin >> temp ;
		v.push_back(temp) ;
	}
	long long int ans = 0 ;
	long long int pos = v[0] ;
	for(long long int i=1;i<=m;i++)
	{
		if(v[i]>=v[i-1])
		{
			ans+=v[i]-v[i-1] ;
		}
		else
		{
			ans+=n+v[i]-v[i-1] ;
		}
		//cout << ans << " " << pos << "\n" ;
	}
	cout << ans << "\n" ;
	return 0 ;
}