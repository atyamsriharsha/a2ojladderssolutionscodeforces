#include <bits/stdc++.h>
using namespace std ;
long long int c[200005] ;
bool rem[100005],rem1[100005] ;
std::vector<long long int> a[100005],b[100005];
std::vector<long long int> order_of_visiting,order_of_reverse_visiting;
const long long int MOD = 1000000007 ;
#define INF 1000000000

void dfs(long long int v)
{
	rem[v] = 1 ;
	for(long long int i=0;i<a[v].size();i++)
	{
		if(rem[a[v][i]]==0)
		{
			dfs(a[v][i]) ;
		}
	}
	order_of_visiting.push_back(v) ;
}

void dfs1(long long int v)
{
	rem1[v]=1 ;
	order_of_reverse_visiting.push_back(v) ;
	for(long long int i=0;i<b[v].size();i++)
	{
		if(rem1[b[v][i]]==0)
		{
			dfs1(b[v][i]) ;
		}
	}
}

int main()
{
	long long int n ;
	cin >> n ;
	for(long long int i=1;i<=n;i++)
	{
		scanf("%lld",&c[i]) ;
	}
	long long int m,temp1,temp2 ;
	cin >> m ;
	for(long long int i=0;i<m;i++)
	{
		scanf("%lld%lld",&temp1,&temp2) ;
		a[temp1].push_back(temp2) ;
		b[temp2].push_back(temp1) ;
	}
	for(long long int i=1;i<=n;i++)
	{
		if(rem[i]==0)
		{
			dfs(i) ;
		}
	}
	long long int ansc=0,anscnt=1;
	for(long long int i=order_of_visiting.size()-1;i>=0;i--)
	{
		if(rem1[order_of_visiting[i]]==0)
		{
			dfs1(order_of_visiting[i]) ;
			long long int mn=INF+2;
            long long int cnt=0;
            for(long long int j=0;j<order_of_reverse_visiting.size();j++)
            {
                if(c[order_of_reverse_visiting[j]]<mn)
                {
                    mn=c[order_of_reverse_visiting[j]];
                    cnt=1;
                }
                else if(c[order_of_reverse_visiting[j]]==mn)
                {
                    ++cnt;
                }
            }
            ansc+=mn;
            anscnt*=cnt;
            anscnt%=MOD;
            order_of_reverse_visiting.clear();
		}
	}
	cout << ansc << " " << anscnt << "\n" ;
	return 0 ;
}