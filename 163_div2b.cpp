#include <bits/stdc++.h>
using namespace std ;
int main()
{
	long long int n,t,ans=-1 ;
	cin >> n >> t ;
	string s ;
	cin >> s ;
	while(t--)
	for(long long int i=0;i<s.length();)
	{
		if(s[i]=='B' && s[i+1]=='G' && i+1<s.length())
		{
			s[i]='G' ;
			s[i+1]='B' ;
			i=i+2 ;
		}
		else
		{
			i=i+1 ;
		}
	}
	cout << s ;
	return 0 ;
}