#include <bits/stdc++.h>
using namespace std ;
int main()
{
	long long int i,j,n,t;
    string s;
    cin>>s;
    long long int a[27] = {0};
    cin>>t;
    for(long long int i=0;i<26;i++)
    {
    	cin>>a[i];
    }
    long long int ans = 0;
    for(long long int i=0;i<s.length();i++)
    {
    	ans += a[s[i]-'a']*(i+1);
    }
    long long int m= -1;
    for(long long int i=0;i<26;i++)
    {
    	m = max(m,a[i]);
    }
    for(long long int i =s.length()+1;i<=t+s.length();i++)
    {
      	ans += i*m;
    }
    cout<<ans;
	return 0 ;
}