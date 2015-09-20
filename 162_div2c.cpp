#include <bits/stdc++.h>
using namespace std ;
int main()
{
	string s ;
	cin >> s ;
	std::vector<long long int> v,v1;
	long long int length= s.length() ;
	for(long long int i=0;i<length;i++)
	{
		if(s[i]=='l')
		{
			v1.push_back(i+1) ;
		}
		else
		{
			v.push_back(i+1) ;
		}
	}
	reverse(v1.begin(),v1.end()) ;
	for(long long int i=0;i<v.size();i++)
	{
		cout << v[i] << "\n" ;
	}
	for(long long int i=0;i<v1.size();i++)
	{
		cout << v1[i] << "\n" ;
	}
	return 0 ;
}