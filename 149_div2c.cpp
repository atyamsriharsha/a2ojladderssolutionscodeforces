#include <bits/stdc++.h>
using namespace std ;

set<pair<long long int,long long int> > all_allowed_points ;
queue<pair<long long int,long long int> > bfs_queue ;
set<pair<long long int,long long int> >used ;
long long int dx[] = {1,0,-1,0,1,1,-1,-1} ;
long long int dy[] = {0,1,0,-1,1,-1,1,-1} ;
const long long int max1 = 1<<30 ;

int main()
{
	long long int x0,y0,x1,y1 ;
	cin >> x0 >> y0 >> x1 >> y1 ;
	long long int n,r,a,b ;
	cin >> n ;
	for(long long int i=0;i<n;i++)
	{
		cin >> r >> a >> b ;
		for(long long int j=a;j<=b;j++)
		{
			all_allowed_points.insert(make_pair(r,j)) ;
		}
	}
	bfs_queue.push(make_pair(x0,y0)) ;
	used.insert(make_pair(x0,y0)) ;
	for(long long int i=0;i<max1;i++)
	{
		queue<pair<long long int,long long int> > next ;
		if(!bfs_queue.size())
			break ;
		while(bfs_queue.size())
		{
			long long int p1 = bfs_queue.front().first ;
			long long int p2 = bfs_queue.front().second ;
			bfs_queue.pop() ;
			if(p1==x1 && p2==y1)
			{
				cout << i << "\n" ;
				return 0 ;
			}
			for(long long int j=0;j<8;j++)
			{
				long long int rx = p1+dx[j] ;
				long long int ry = p2+dy[j] ;
				if(all_allowed_points.find(make_pair(rx,ry))==all_allowed_points.end())
					continue ;
				if(used.find(make_pair(rx,ry))!=used.end())
					continue ;
				used.insert(make_pair(rx,ry)) ;
				next.push(make_pair(rx,ry)) ;
			}
		}
		bfs_queue = next ;
	}
	cout << -1 << "\n" ;
	return 0 ;
}