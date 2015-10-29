#include <bits/stdc++.h>
using namespace std ;
int main()
{
	long long int n,m,temp ;
	cin >> n >> m ;
	std::vector<long long int> v;
	for(long long int i=0;i<m;i++)
	{
		cin >> temp ;
		if(temp==1 || temp==n)
		{
			cout << "NO" ;
			return 0 ;
		}
		v.push_back(temp) ;
	}
	sort(v.begin(),v.end()) ;
	for(long long int i=0;i<m;i++)
	{
		if(v[i+1]-v[i]==1 && v[i+2]-v[i+1]==1 && i+1<n && i+2<n)
		{
			cout << "NO" ;
			return 0 ;
		}
	}
	cout << "YES" ;
	return 0 ;
}