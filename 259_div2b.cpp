#include <bits/stdc++.h>
using namespace std ;
int main()
{
	long long int n,temp,ref,count1=0 ;
	cin >> n ;
	std::vector<long long int> v,v1;
	for(long long int i=0;i<n;i++)
	{
		cin >> temp ;
		v.push_back(temp) ;
		v1.push_back(temp) ;
	}
	sort(v1.begin(),v1.end()) ;
	bool flag1 = 0 ;
	for(long long int i=0;i<n;i++)
	{
		if(v1[i]!=v[i])
		{
			flag1 = 1 ;
			break ;
		}
	}
	if(flag1==0)
	{
		cout << 0 ;
		return 0 ;
	}
	else
	{
		for(long long int i=1;i<n;i++)
		{
			if(v[i]<v[i-1])
			{
				count1++ ;
				ref =i+1 ;
			}
		}
		if(count1==1 && v[n-1]<=v[0])
		{
			cout << n-ref+1 ;
		}
		else
		{
			cout << -1 ;
		}
	}
	return 0 ;
}