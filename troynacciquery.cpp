#include <bits/stdc++.h>
using namespace std ;
int main()
{
	long long int n,q,temp;
	cin >> n >> q ;
	long long int f1,f2 ;
	cin >> f1 >> f2 ;
	long long int a,b ;
	cin >> a >> b ;
	std::vector<long long int> v;
	for(long long int i=0;i<n;i++)
	{
		cin >> temp ;
		v.push_back(temp) ;
	}
	long long int l,r ;
	while(q--)
	{
		cin >> l >> r ;
	}
	return 0 ; 
}