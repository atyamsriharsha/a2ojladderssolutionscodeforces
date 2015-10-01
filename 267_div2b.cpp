#include <bits/stdc++.h>
using namespace std ;

int main()
{
	long long int n,m,k,temp ;
	cin >> n >> m >> k ;
	std::vector<long long int> v;
	v.push_back(0) ;
	vector<vector<long long int> > v1 ;
	for(long long int i=1;i<=m+1;i++)
	{
		cin >> temp ;
		v.push_back(temp) ;
	}
	long long int ref = v[m+1],ans=0,count1=0,temp1,temp2 ;
	for(long long int i=1;i<=m;i++)
	{
		v[m+1]=ref ;
		count1 =0 ;
		for(long long int j=0;j<32;j++)
		{
		   temp1 = v[i]&1 ;
		   temp2 = v[m+1]&1 ;
		   if(temp1!=temp2)
		   {
		   	 count1++ ;
		   }
		   v[i] =v[i] >> 1 ;
		   v[m+1]=v[m+1] >> 1 ;
		}
		if(count1<=k)
		{
			ans++ ;
		}
	}
	cout << ans ;
	return 0 ;
}