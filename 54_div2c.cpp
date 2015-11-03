#include <bits/stdc++.h>
using namespace std ;
int main()
{
	long long int n,temp ;
	long long int ans ;
	cin >> n ;
	std::vector<long long int> v;
	long long int v1[n+1] ;
	v.push_back(0) ;
	for(long long int i=0;i<n;i++)
	{
		cin >> temp ;
		v.push_back(temp) ;
	}
	ans =v[1] ;
	//cout << ans ;
	for(long long int i=1;i<=n/2;i++)
	{
		v1[i]=i ;
		//cout << i << " " << v1[i] << " " ;
	}
	for(long long int i=n/2+1;i<=n;i++)
	{
		v1[i]=n-i+1 ;
	}
	for(long long int i=1;i<=n;i++)
	{
		if(v[i]-ans+1>0)
			v[i]=v[i]-ans+1 ;
	}
	//for(long long int i=0;i<n;i++)
	//	cout << v1[i+1] << " " ;
	long long int count1 = 0 ;
	for(long long int i=1;i<=n;i++)
	{
	//	cout << v[i] << " " << v1[i] << "\n";
		if(v[i]!=v1[i])
		{
			count1++ ;
		}
	}
	cout << count1 ;
	cout << "\n" ;
	return 0 ;
} 