#include <bits/stdc++.h>
using namespace std ;
char a[51][51];
long long int n,m;
long long int vis[51][51];
long long int dx[4]={1,0,-1,0};
long long int dy[4]={0,1,0,-1};
long long int check(long long int x,long long int y)
{
	if(x>=0&&x<n&&y>=0&&y<m)
		return 1 ;
	return 0 ;
}
void dfs(long long int x,long long int y)
{
    if(vis[x][y])
    	return;
    vis[x][y]=1;
    for(long long int i=0;i<4;i++)
    {
        long long int xx=x+dx[i];
        long long int yy=y+dy[i];
        if(check(xx,yy)&&a[xx][yy]=='#')
        {
        	dfs(xx,yy);
        }
    }
}
bool con()
{
	memset(vis,0,sizeof(vis));
    long long int c=0;
    for(long long int i=0;i<n;i++)
    {
    	for(long long int j=0;j<m;j++)
    	{
    		if(a[i][j]=='#'&&vis[i][j]==0)
    		{
        		if(c)
        		{
        			return 0;
        		}
       			c++;
        		dfs(i,j);
    		}
    	}
    }
    return 1;
}
long long int solve()
{
    long long int c=0;
    for(long long int i=0;i<n;i++)
    {
    	for(long long int j=0;j<m;j++)
    	{
    		if(a[i][j]=='#')
    		{
    			c++;
    		}
    	}
    }
    if(c==1||c==2)
    {
    	return -1;
    }
    for(long long int i=0;i<n;i++)
    {
    	for(long long int j=0;j<m;j++)
    	{
    		if(a[i][j]=='#')
    		{
        		a[i][j]='.';
        		//cout << con() << " ";
        		if(!con())
        		{
        			return 1;
        		}
        		a[i][j]='#';
    		}
    	}
    }
    //cout << "hello" ;
    return 2;
}
int main()
{
    cin >> n >> m ;
    //cout << "fcuk" ;
    for(long long int i=0;i<n;i++)
    {
    	scanf("%s",a[i]) ;
    //	cout << i << "\n" ;
    }
    //cout << "dum" ;
    cout << solve() << "\n" ;
}