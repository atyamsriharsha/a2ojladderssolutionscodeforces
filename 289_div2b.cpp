#include <bits/stdc++.h>
using namespace std ;
int main()
{
	long long int n,k,temp ;
	cin >> n >> k ;
	std::vector<long long int > v;
	for(long long int i=0;i<n;i++)
	{
		cin >> temp ;
		v.push_back(temp) ;
	}
	for(long long int i=0;i<n;i++)
	{
		for(long long int j=0;j<n;j++)
		{
			if(abs(v[i]-v[j])>k)
			{
				cout << "NO" ;
				return 0 ;
			}
		}
	}
	cout << "YES\n" ;
	for(long long int i=0;i<n;i++)
	{
		long long int count1 =0 ;
		for(long long int j=0;j<v[i];j++)
		{
			cout << (count1)%k+1 << " " ;
			count1++ ;
		}
		cout << "\n" ;
	}
	return 0 ;
}