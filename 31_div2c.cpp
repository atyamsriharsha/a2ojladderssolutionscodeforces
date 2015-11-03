#include <bits/stdc++.h>
using namespace std ;
std::vector<pair<pair<long long int,long long int>,long long int> > v;
long long int n ;
long long int ans[5001],cnt=0 ;
bool func(pair<pair<long long int,long long int>,long long int> a,pair<pair<long long int,long long int>,long long int> b)
{
	if(a.first.first==b.first.first)
	{
		return a.first.second<b.first.second ;
	}
	return a.first.first<b.first.first ;
}

bool check(long long int x)
{
	for(long long int i=0;i<n-1;i++)
	{
		if(i==x-1)
		{
			if(i+2<n && v[i].first.second>v[i+2].first.first)
				return 0 ;
			i++ ;
		}
		else
		{
			if(v[i].first.second>v[i+1].first.first)
				return 0 ;
		}
	}
	return 1 ;
}

int main()
{
	long long int temp1,temp2 ;
	cin >> n ;
	for(long long int i=0;i<n;i++)
	{
		cin >> temp1 >> temp2 ;
		v.push_back(make_pair(make_pair(temp1,temp2),i+1)) ;
	}
	sort(v.begin(),v.end(),func) ;
	for(long long int i=0;i<n;i++)
	{
		if(check(i))
		{
			ans[cnt++]=v[i].second ;
		}
	}
	sort(ans,ans+cnt) ;
	cout << cnt << "\n" ;
	for(long long int i=0;i<cnt;i++)
	{
		if(i!=0)
		{
			cout << " " ;
		}
		cout << ans[i] ;
	}
	if(cnt!=0)
	{
		cout << "\n" ;
	}
	return 0 ;
}