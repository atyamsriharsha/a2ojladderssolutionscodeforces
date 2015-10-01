#include <bits/stdc++.h>
using namespace std ;
long long int max1 = 1<<30 ;
long long int n, m, ret;
char name[] = "DIMA";
long long int dx[] = {-1, 0, 1, 0};
long long int dy[] = {0, 1, 0, -1};
char s[1007][1007];
long long int dp[1007][1007];

void dfs(long long int x,long long int y,long long int c)
{
	if(dp[x][y]==-2)
	{
		ret=max1;
		return;
	}
	else if(dp[x][y]!=-1) 
		return;
	dp[x][y]=-2;
	long long int tx,ty,mx=0;
	for(long long int i=0;i<4;i++)
	{
		tx=x+dx[i];
		ty=y+dy[i];
		if(tx<0 || ty<0 || tx>=n || ty>=m) 
			continue;
		if(c==3)
		{
			mx = max(mx,1LL);
			if(s[tx][ty]=='D')
			{
				dfs(tx,ty,0);
				mx = max(mx,dp[tx][ty]+1);
			}
		}
		else if(s[tx][ty]==name[c + 1])
		{
			dfs(tx,ty,c+1);
			mx = max(mx,dp[tx][ty]);
		}
	}
	dp[x][y]=mx;
	ret=max(ret,mx);
}


int main()
{
	cin >> n >> m ;
	for(long long int i=0;i<n;i++)
	{
		cin >> s[i] ;
	}
	for(long long int i=0;i<1007;i++)
	{
		for(long long int j=0;j<1007;j++)
		{
			dp[i][j]=-1 ;
		}
	}
	ret = 0;
	for(long long int i=0;i<n;i++)
	{ 
		for(long long int j=0;j<m;j++)
		{
			if(s[i][j]=='D' && dp[i][j]==-1) 
				dfs(i,j,0);
		}
	}
	if(ret==0)
	{ 
		cout << "Poor Dima!" ; 
	}
	else if(ret==max1) 
	{
		cout << "Poor Inna!" ; 
	}
	else 
	{
		cout << ret  ;
	}
	return 0;
}