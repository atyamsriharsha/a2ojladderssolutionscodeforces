#include <bits/stdc++.h>
using namespace std ;
int n,m,x,y,preb[10000],prew[10000];
int ans[10000][2];
char zr[1100][1100];
int tb[11000],tw[11000];

int main()
{
	cin >> n >> m >> x >> y;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin >>zr[i][j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
 			if(zr[i][j]=='#')
 				tb[j]++; 
 			else tw[j]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
    	preb[i]=preb[i-1]+tb[i];
    	prew[i]=prew[i-1]+tw[i];
	}
	for(int i=0;i<=m;i++)
	{
		ans[i][0]=1000000000;
		ans[i][1]=1000000000;
	}
	ans[0][0]=0 ;
	ans[0][1]=0;
	for(int i=0;i<=m;i++)
	{
		for(int nw=i+1;nw<=m;nw++)
		{
			if(nw-i>=x&&nw-i<=y)
			{
 				ans[nw][1]=min(ans[nw][1],ans[i][0]+prew[nw]-prew[i]);
 				ans[nw][0]=min(ans[nw][0],ans[i][1]+preb[nw]-preb[i]);                     
			}
		}
	}
	cout << min(ans[m][0],ans[m][1]) << "\n";
return 0;}