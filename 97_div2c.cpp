#include <bits/stdc++.h>
using namespace std ;

int main()
{
	int n ;
	long long int temp ;
	cin >> n ;
	std::vector<long long int> v;
	for(int i=0;i<n;i++)
	{
		cin >> temp ;
		v.push_back(temp) ;
	}
	sort(v.begin(),v.end()) ;
	if(v[n-1]!=1)
		v[n-1] = 1 ;
	else
		v[n-1]=2 ;
	sort(v.begin(),v.end()) ;
	for(int i=0;i<n;i++)
	{
		cout << v[i] << " " ;
	}
	cout << "\n" ;
	return 0 ;
}