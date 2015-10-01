#include <bits/stdc++.h>
using namespace std ;

int main()
{
	string s1,s2 ;
	cin >> s1 >> s2 ;
	long long int count1=1 ;
	std::vector<long long int> v[26];
	for(long long int i=0;i<s1.length();i++)
	{
		v[s1[i]-97].push_back(i) ;
	}
	long long int ref =0 ;
	for(long long int j=0;j<s2.length();j++)
	{
		if(v[s2[j]-97].empty()!=0)
		{
			cout << -1 << "\n" ;
			return 0 ;
		}
		long long int ans = lower_bound(v[s2[j]-97].begin(),v[s2[j]-97].end(),ref)-v[s2[j]-97].begin() ;
		if(ans==v[s2[j]-97].size())
		{
			ans = 0 ;
			count1++ ;
		}
		ref = v[s2[j]-97][ans]+1 ;
	}
	cout << count1 << "\n" ;
	/*
	long long int count1 = 0 ;
	bool rem ;
	for(long long int i=0;i<s2.length();)
	{
		rem = 0 ;
		for(long long int j=0;j<s1.length()&&i<s2.length();j++)
		{
			if(s2[i]==s1[j])
			{
				i++ ;
				rem = 1 ;
			}
		}
		count1++ ;
		if(rem==0)
		{
			cout << -1 << "\n" ;
			return 0 ;
		}
	}
	cout << count1 << "\n" ;*/
	return 0 ;
}