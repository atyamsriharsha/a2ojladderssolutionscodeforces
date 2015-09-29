#include <bits/stdc++.h>
using namespace std ;
const long long int max1 = 1e6 + 7;
vector<pair<long long int,long long int> > in[max1],out[max1];
pair<long long int,long long int> dfs(long long int v,long long int min1 = max1)
{
	if(!out[v].size()) 
		return make_pair(v,min1);
	return dfs(out[v][0].first,min(min1,out[v][0].second));
}

int main()
{
	long long int n,m;
	cin >> n >> m;
	for(long long int i=0;i<m;i++)
	{
		long long int temp,temp1,temp2;
		cin >> temp >> temp1 >> temp2;
		temp1-- ;
		temp-- ;
		in[temp1].push_back(make_pair(temp,temp2));
		out[temp].push_back(make_pair(temp1,temp2));
	}
	long long int count1 = 0;
	for(long long int i=0;i<n;i++)
	{
		if(out[i].size() && !in[i].size())
		{
			count1++;
		}
	}
	cout << count1 << endl;
	for(long long int i=0;i<n;i++)
	{
		if(out[i].size() && !in[i].size())
		{
			pair<long long int,long long int> ans = dfs(i);
			cout << i + 1 << ' ' << ans.first + 1 << ' ' << ans.second << endl;
		}
	}
	return 0;
}