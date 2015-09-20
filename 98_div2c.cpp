#include <bits/stdc++.h>
using namespace std ;
int main()
{
	long long int n ;
	cin >> n ;
	pair<long long int,long long int> p[n] ;
	for(long long int i=0;i<n;i++)
	{
		cin >> p[i].first >> p[i].second ;
	}
	sort(p,p+n) ;
	long long int max1 = p[0].second,count1=0 ;
	for(long long int i=1;i<n;i++)
	{
		if(p[i].second>max1)
			max1 = p[i].second ;
		else if(p[i].second<max1)
			count1++ ;
	}
	cout << count1 << "\n";
	return 0 ;
}