#include <bits/stdc++.h>
using namespace std ;
std::vector<long long int> p[100000+7] ;
long long int init[100000+7];
long long int goal[100000+7];
std::vector<long long int> ans1;

void dfs(long long int a,long long int b,long long int c,long long int d,long long int e)
{
	if(c!=0 && e!=0)
	{
		init[a]  = 1 - init[a] ;
	}
	if(c==0 && d!=0)
	{
		init[a] = 1 - init[a] ;
	}
	if(init[a]!=goal[a])
	{
		ans1.push_back(a) ;
		if(c!=0)
		{
			e = 1-e ;
		}
		if(c==0)
		{
			d = 1-d ;
		}
	}
	for(long long int i=0;i<p[a].size();i++)
	{
		if(p[a][i]==b)
		{
			continue ;
		}
		dfs(p[a][i],a,1-c,d,e) ;
	}
}

int main()
{
	long long int n,u,v,temp ;
	cin >> n ;
	for(long long int i=0;i<n-1;i++)
	{
		cin >> u  >> v ;
		p[u].push_back(v) ;
		p[v].push_back(u) ;
	}
	for(long long int i=1;i<=n;i++)
	{
		cin >> temp ;
		init[i]=temp ;
	}
	for(long long int i=1;i<=n;i++)
	{
		cin >> temp ;
		goal[i]=temp ;
	}
	dfs(1,0,0,0,0) ;
	cout << ans1.size() << "\n" ;
	for(long long int i=0;i<ans1.size();i++)
	{
		cout << ans1[i] << "\n" ;
	}
	return 0 ;
}