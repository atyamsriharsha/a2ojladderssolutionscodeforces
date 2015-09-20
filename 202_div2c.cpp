#include <bits/stdc++.h>
using namespace std ;
int main()
{
	long long int n,temp,max1=-1 ,sum1=0;
	cin >> n ;
	std::vector<long long int> v;
	for(long long int i=0;i<n;i++)
	{
		cin >> temp ;
		v.push_back(temp) ;
		sum1+=temp ;
		max1=max(max1,temp) ;
	}
	//sort(v.begin(),v.end()) ;
	//cout << sum1 ;
	sum1 = (sum1+n-2)/(n-1) ;
	//cout << int((sum1)/(n-1)+0.5) << "\n" ;
	//cout << max1+1 ;
	cout << max(sum1,max1) << "\n" ;
	return 0 ;
}