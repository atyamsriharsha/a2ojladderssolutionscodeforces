#include <bits/stdc++.h>
using namespace std ;
int main()
{
	long long int n,t,temp,count1=0,res=-1 ;
	cin >> n >> t ;
	std::vector<long long int> reading_time;
	for(long long int i=0;i<n;i++)
	{
		cin >> temp ;
		reading_time.push_back(temp) ;
	}
	for(long long int i=0,j=0;i<n;i++)
	{
		while(j<n && count1+reading_time[j]<=t)
		{
			count1+=reading_time[j] ;
			j++ ;
		}
		res=max(res,j-i) ;
		count1=count1-reading_time[i] ;
	}
	cout << res ;
	return 0 ;
}