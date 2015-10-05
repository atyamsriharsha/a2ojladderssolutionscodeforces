#include <bits/stdc++.h>
using namespace std ;

const long long int MN = 2011;
long long int m, n, d[MN][MN];
pair<long long int,long long int> x[11];
int main() 
{
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    while(cin >> m >> n) 
    {
        long long int k; 
        cin >> k;
        for(long long int i=1;i<=k;i++)
        {
         	cin >> x[i].first >> x[i].second;
        }
        long long int res = 0;
        long long int savei=-1,savej=-1;
        for(long long int i=1;i<=m;i++)
        { 
        	for(long long int j=1;j<=n;j++) 
        	{
            	d[i][j] = 1000111000;
            	for(long long int t=1;t<=k;t++) 
            	{
                	d[i][j] = min(d[i][j],abs(x[t].first-i)+abs(x[t].second-j));
            	}
            	res = max(res, d[i][j]);
        	}
        }
        for(long long int i=1;i<=m;i++) 
        {
            for(long long int j=1;j<=n;j++)
            {
            	if(d[i][j]==res) 
            	{
                	savei = i;
                	savej = j;
                	break;
            	}
            }
        }
        cout << savei << ' ' << savej << endl;
    }
    return 0;
}