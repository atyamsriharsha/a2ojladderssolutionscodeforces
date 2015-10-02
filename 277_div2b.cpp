#include <bits/stdc++.h>
using namespace std ;
long long int a[101][101],b[101][101];
int main()
{
	long long int n, m;
	cin >> n >> m;
	for(long long int i=0;i<n;i++)
	{
		for(long long int j=0;j<m;j++)
		{
			a[i][j]=1;
		}
	}
	for(long long int i=0;i<n;i++)
	{
		for(long long int j=0;j<m;j++)
		{
			cin >> b[i][j];
			if(b[i][j]==0)
			{
				for(long long int k=0;k<m;k++)
				{
					a[i][k] = 0;
				}
				for(long long int k=0;k<n;k++)
				{
					a[k][j] = 0;
				}
			}
		}
	}
	for(long long int i=0;i<n;i++)
	{
		for(long long int j=0;j<m;j++)
		{
			long long int now = 0;
			for(long long int k=0;k<m;k++)
			{
				now|=a[i][k];
			}
			for(long long int k=0;k<n;k++)
			{
				now|=a[k][j];
			}
			if(now!=b[i][j])
			{
				cout << "NO" << "\n";
				return 0;
			}
		}
	}
	cout << "YES" << "\n";
	for(long long int i=0;i<n;i++)
	{
		for(long long int j=0;j<m;j++)
		{
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	return 0 ;
}