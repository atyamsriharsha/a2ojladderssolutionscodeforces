#include <bits/stdc++.h>
using namespace std ;
int main()
{
	long long int n,temp;
	cin >> n ;
	std::vector<long long int> v;
	long long int sumendinghere=0,sumsofar=0 ;
	for(long long int i=0;i<n;i++)
	{
		cin >> temp  ;
		v.push_back(temp) ;
	}
	for(long long int i=0;i<n;i++)
	{
		sumendinghere+=v[i] ;
		if(sumendinghere<0)
		{
			sumendinghere = 0 ;
			continue ;
		}
		if(sumsofar<sumendinghere)
		{
			sumsofar=sumendinghere ;
		}
	}
	cout << sumsofar << "\n";
	return 0 ;
}