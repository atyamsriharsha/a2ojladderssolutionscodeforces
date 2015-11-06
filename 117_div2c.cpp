#include <bits/stdc++.h>
using namespace std ;
int main()
{
	long long int n,len,temp ;
	cin >> n >> len ;
	std::vector<long long int> v;
	for(long long int i=0;i<n;i++)
	{
		cin >> temp ;
		v.push_back(temp) ;
	}
	long long int k ;
	cin >> k ;
	long long int start =0 ;
	for(long long int i=0;i<n;i++)
	{
		if(i-start>k)
		{
			start=start+1 ;
		}
		else
		{
			
		}
	}
	return 0 ;
} 