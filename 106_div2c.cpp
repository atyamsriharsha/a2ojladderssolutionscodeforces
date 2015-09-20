#include <bits/stdc++.h>
using namespace std ;
int main()
{
	long long int n ;
	cin >> n ;
	std::vector<long long int> v1,v2;
	pair<long long int,long long int> p[n] ;
	for(long long int i=0;i<n;i++)
	{
		cin >> p[i].first ;
		p[i].second = i+1 ;
	}
	sort(p,p+n) ;
	reverse(p,p+n) ;
	long long int max1 = p[n-1].first,diff=0 ;
	for(long long int i=0;i<n-1;i=i+2)
	{
		if(diff>0)
		{
			v1.push_back(p[i+1].second) ;
			v2.push_back(p[i].second) ;
			diff+=p[i+1].second-p[i].second ;
		}
		else
		{
			v1.push_back(p[i].second) ;
			v2.push_back(p[i+1].second) ;
			diff+=p[i].second-p[i+1].second ;
		}
	}
	if(n&01)
	{
		if(diff>0)
		{
			v2.push_back(p[n-1].second) ;
		}
		else
		{
			v1.push_back(p[n-1].second) ;
		}
	}
	cout << v1.size() << "\n" ;
	for(long long int i=0;i<v1.size();i++)
	{
		cout << v1[i] << " " ;
	}
	cout << "\n" ;
	cout << v2.size() << "\n" ;
	for(long long int i=0;i<v2.size();i++)
	{
		cout << v2[i] << " " ;
	}
	cout << "\n" ;
	return 0 ;
}