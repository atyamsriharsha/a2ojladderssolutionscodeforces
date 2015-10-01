#include <bits/stdc++.h>
using namespace std ;
map<string,string> aa ;
int main()
{
	long long int n,m;
	cin >> n >> m;
	string a,b;
	for(long long int i=0;i<m;i++)
	{
		cin>>a>>b;
		if(a.size()<=b.size())
		{ 
			aa[a]=a;
		} 
		else
		{ 
			aa[a]=b;
		}
	}
	for(long long int i=0;i<n;i++)
	{
		cin>>a;
		cout << aa[a] <<' ';
	}
	return 0 ;
}